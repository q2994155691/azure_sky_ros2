#include"ShootStrategy.h"

namespace rm
{
	ShootStrategy::ShootStrategy(RangeSetter* RangeSetter__)
		:RangeSetter__(RangeSetter__)
	{
	}
	void ShootStrategy::sort_car_four_points(std::vector<cv::Point3f>& car_four_points)
	{
		// ���վ�������
		std::sort(car_four_points.begin(), car_four_points.end(), [](const cv::Point3f& a, const cv::Point3f& b) {
			return cv::norm(a) < cv::norm(b);
			});
	}
	cv::Point2f ShootStrategy::get_car_middle(const std::vector<cv::Point3f>& car_four_points)
	{
		// ��άѡ��Ϊ��׼����x,z
		cv::Point2f car_middle2d(0, 0);
		for (int i = 0; i < 4; i++)
		{
			car_middle2d.x += car_four_points[i].x;
			car_middle2d.y += car_four_points[i].z;
		};
		car_middle2d.x /= 4.0;
		car_middle2d.y /= 4.0;
		return car_middle2d;
	}
	float ShootStrategy::calculate_angle_abs(const cv::Point2f& A, const cv::Point2f& B, const cv::Point2f& C)
	{
		cv::Point2f BA = A - B;
		cv::Point2f BC = C - B;
		double dotProduct = BA.x * BC.x + BA.y * BC.y;
		double magnitudeBA = std::sqrt(BA.x * BA.x + BA.y * BA.y);
		double magnitudeBC = std::sqrt(BC.x * BC.x + BC.y * BC.y);
		double cosTheta = dotProduct / (magnitudeBA * magnitudeBC);
		cosTheta = std::max(std::min(cosTheta, 1.0), -1.0);
		// ȡ����ֵ,ֻҪ֪������ֵ����
		float thetaRadians = std::acos(cosTheta);
		if (thetaRadians > CV_PI / 2) thetaRadians = thetaRadians - CV_PI;
		return thetaRadians;
	}
	void ShootStrategy::get_left_right_points(cv::Point3f& left_point, cv::Point3f& right_point, 
		const std::vector<cv::Point3f>& sorted_car_four_points)
	{
		// ȡ�����������
		// ת��Ϊ��,ѡ���Ҳ�,ת��Ϊ��,ѡ�����
		if (sorted_car_four_points[0].x < sorted_car_four_points[1].x) {
			left_point = sorted_car_four_points[0];
			right_point = sorted_car_four_points[1];
		}
		else {
			left_point = sorted_car_four_points[1];
			right_point = sorted_car_four_points[0];
		};
	}
	float ShootStrategy::shoot_judge(const cv::Point3f& shoot_target)
	{
		bool canshoot = RangeSetter__->if_yaw_shoot_hit(shoot_target);
		return canshoot ? 0.0 : -1.0;
	}
	;
	
	ShootTrackStrategy::ShootTrackStrategy(bool ignore_min_shoot_x, float switch_reverse_amplification_weight,
		const std::function<float(const Eigen::VectorXf&)>& track_face_angle_func,
		RangeSetter* RangeSetter__)
		:ShootTrackStrategyBase(RangeSetter__, switch_reverse_amplification_weight), 
		track_face_angle_func(track_face_angle_func), ignore_min_shoot_x(ignore_min_shoot_x)
	{
	}

	cv::Point3f ShootTrackStrategy::choose_absolute_target(
		std::vector<cv::Point3f> car_four_absolute_points,
		std::vector<cv::Point3f> car_four_shoot_points,
		const Eigen::VectorXf& state, const float& car_yaw)
	{
		float rotational_speed = state(7); // ת��,����/s
		float radius = (state(8) + state(9)) / 2; // �뾶ȡ��ֵ

		this->sort_car_four_points(car_four_absolute_points);
		this->sort_car_four_points(car_four_shoot_points);

		cv::Point2f car_absolute_middle2d = this->get_car_middle(car_four_absolute_points);

		float track_face_angle = this->track_face_angle_func(state);

		this->last_track_face_angle = last_track_face_angle * 180 / CV_PI;

		// �������������ļн�
		float shortest_face_angle = this->calculate_angle_abs(
			cv::Point2f(0, 0), car_absolute_middle2d, cv::Point2f(car_four_absolute_points[0].x, car_four_absolute_points[0].z)
		);
		float next_face_angle = this->calculate_angle_abs(
			cv::Point2f(0, 0), car_absolute_middle2d, cv::Point2f(car_four_absolute_points[1].x, car_four_absolute_points[1].z)
		);

		// ֻҪ��track_face_angle�����ڴ���װ�װ�,��������������װ�װ�
		// �������Ԥ��
		if (track_face_angle < shortest_face_angle && track_face_angle < next_face_angle) { // Ԥ��
			aim_preview = true;
			// ȷ�ϸ߶�
			
			cv::Point3f right_point, left_point;
			if (car_four_shoot_points[0].x < car_four_shoot_points[1].x) {
				left_point = car_four_absolute_points[0];
				right_point = car_four_absolute_points[1];
			}
			else {
				left_point = car_four_absolute_points[1];
				right_point = car_four_absolute_points[0];
			}
			float height = rotational_speed > 0 ? left_point.y : right_point.y;

			// ȷ��Ԥ��λ��xz
			// ��ת,ȡ��ʱ��
			cv::Point2f aim_point2f = calculate_rotate_point2f(car_absolute_middle2d, radius,
				rotational_speed > 0 ? CV_PI - track_face_angle : CV_PI + track_face_angle );

			return cv::Point3f(aim_point2f.x, height, aim_point2f.y);
		}
		else { // ����Ƕ���СĿ��
			aim_preview = false;
			//std::cout << "target: " << (shortest_face_angle < next_face_angle ? car_four_absolute_points[0].y : car_four_absolute_points[1].y) << std::endl;
			return shortest_face_angle < next_face_angle ? car_four_absolute_points[0] : car_four_absolute_points[1];
		};
	}

	float ShootTrackStrategy::calculate_target(cv::Point3f& aim_target,
		std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw)
	{
		if(aim_preview) return -1.0;
		else return 0.0;
		//bool ret_shoot = RangeSetter__->if_yaw_shoot_hit(aim_target, -state(3) - car_yaw);
		//if (aim_preview) return ret_shoot ? 0.0 : -1.0; // -1.0
		//if (ignore_min_shoot_x) return 0.0;
		//return ret_shoot ? 0.0 : -1.0;
	}

	bool ShootTrackStrategy::get_aim_preview() const
	{
		return this->aim_preview;
	}
	float ShootTrackStrategy::get_switch_reverse_amplification_weight() const
	{
		return switch_reverse_amplification_weight;
	}
	float ShootTrackStrategy::adaptive_calculate_track_face_angle(const Eigen::VectorXf& state)
	{
		int iteration = 15;
		float left = 0;
		float right = CV_PI / 4;
		float rotate_speed_abs = abs(state(7));
		float m1, m2;
		while (iteration--) { // ���ַ��������Ž�
			m1 = left + (right - left) / 3;
			m2 = right - (right - left) / 3;
			// �����������ʱ��
			if (calculate_rotate_cost(m1, rotate_speed_abs, static_max_stability_track_rotate_speed)
				< calculate_rotate_cost(m2, rotate_speed_abs, static_max_stability_track_rotate_speed)) {
				right = m2;
			}
			else {
				left = m1;
			};
		};
		// ��Ҫ��ȥ�Ǽ���ʱ��,�������Ϊһ�κ���
		// x���굥λΪrpm
		float track_rotate_speed_acceleration_buffer_angle = 
			this->track_rotate_speed_acceleration_buffer_k * rotate_speed_abs / 2;
		//std::cout << "RPM : " << rotate_speed_abs * 30 / CV_PI << " || track_rotate_speed_acceleration_buffer_angle : "
		//	<< track_rotate_speed_acceleration_buffer_angle * 2 * 180 / CV_PI << std::endl;
		float track_face_angle = (right + left) / 2 - track_rotate_speed_acceleration_buffer_angle;
		return track_face_angle < 0 ? 0 : track_face_angle;
	}
	float ShootTrackStrategy::calculate_rotate_cost(float track_face_angle, float rotate_speed_abs,
		float static_max_stability_track_rotate_speed)
	{
		// �л�װ�װ�ʱ��һ��װ�װ嵽����ʱ��
		float switch_angle = CV_PI / 2 - 2 * track_face_angle;
		float switch_need_time = switch_angle / rotate_speed_abs;
		float track_need_time = track_face_angle * 2 / static_max_stability_track_rotate_speed;
		return abs(switch_need_time - track_need_time);
	}
	;

	cv::Point2f ShootTrackStrategyBase::calculate_rotate_point2f(const cv::Point2f& car_middle2f,
		float radius, float rotate_angle)
	{
		cv::Point2f car_middle2f_copy = car_middle2f;

		// ȡ����
		double magnitude = std::sqrt(car_middle2f_copy.x * car_middle2f_copy.x
			+ car_middle2f_copy.y * car_middle2f_copy.y);
		if (magnitude == 0) {
			return car_middle2f;
		}
		cv::Point2f normalizedOB = car_middle2f_copy / magnitude;
		cv::Point2f extendedPoint = car_middle2f + normalizedOB * radius;

		cv::Point2f translate = extendedPoint - car_middle2f;
		// �������
		double cosTheta = std::cos(rotate_angle);
		double sinTheta = std::sin(rotate_angle);
		cv::Point2f rotated_point;
		rotated_point.x = translate.x * cosTheta - translate.y * sinTheta;
		rotated_point.y = translate.x * sinTheta + translate.y * cosTheta;

		rotated_point += car_middle2f;

		return rotated_point;
	};

	ShootStepStrategy::ShootStepStrategy(float setting_shoot_interval)
		:ShootStrategy(NULL)
	{
		ShootBuffer__ = new ShootBuffer(setting_shoot_interval);
	}

	ShootStepStrategy::~ShootStepStrategy()
	{
		if (ShootBuffer__ != NULL) delete ShootBuffer__;
	}

	float ShootStepStrategy::calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f>
		car_four_points, const Eigen::VectorXf& state, const float& car_yaw)
	{
		// ��׼Ŀ����Ч,����Ϊ��0���ֹ��0�쳣
		aim_target = cv::Point3f(0, 0, 100);
		
		return 0.0;//ShootBuffer__->drop() ? 0.0 : -1.0;
	}


	ShootSustainStrategy::ShootSustainStrategy()
		:ShootStrategy(NULL)
	{
	}

	float ShootSustainStrategy::calculate_target(cv::Point3f& aim_target,
		std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw)
	{
		// ��׼Ŀ����Ч,����Ϊ��0���ֹ��0�쳣
		aim_target = cv::Point3f(0, 0, 100);
		return 0.0;
	};

	ShootCancelStrategy::ShootCancelStrategy()
		:ShootStrategy(NULL)
	{
	}

	float ShootCancelStrategy::calculate_target(cv::Point3f& aim_target,
		std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw)
	{
		// ��׼Ŀ����Ч,����Ϊ��0���ֹ��0�쳣
		aim_target = cv::Point3f(0, 0, 100);
		return -1.0;
	};

	ShootTranslationStrategy::ShootTranslationStrategy(RangeSetter* RangeSetter__)
		:ShootStrategy(RangeSetter__)
	{
		last_abs_shoot_yaw = 0;
	}

	void ShootTranslationStrategy::clear()
	{
		last_abs_shoot_yaw = 0;
	}

	cv::Point3f ShootTranslationStrategy::translation_target_choose(Coordinate* Coordinate__, std::vector<cv::Point3f> shoot_car_four_points,
		const float& car_yaw, const float& car_pitch)
	{
		this->sort_car_four_points(shoot_car_four_points);

		// ������ľ������,ֻ�������
		cv::Point3f target;
		if (abs(cv::norm(shoot_car_four_points[0]) - cv::norm(shoot_car_four_points[1])) < 3) {
			// תΪ��ά����ϵ�Ƚ�x����
			cv::Point2f pixel_0 = Coordinate__->abs2pixel(Coordinate__->sot2abs(shoot_car_four_points[0], car_yaw, car_pitch), car_yaw, car_pitch);
			cv::Point2f pixel_1 = Coordinate__->abs2pixel(Coordinate__->sot2abs(shoot_car_four_points[1], car_yaw, car_pitch), car_yaw, car_pitch);
			target = pixel_0.x < pixel_1.x ? shoot_car_four_points[0] : shoot_car_four_points[1];
		}
		else {
			target = shoot_car_four_points[0];
		};

		return target;
	}

	float ShootTranslationStrategy::calculate_target(cv::Point3f& aim_target,
		std::vector<cv::Point3f> car_points, const Eigen::VectorXf& state, const float& car_yaw)
	{
		if (car_points.empty()) { // �쳣
			aim_target = cv::Point3f(0, 0, 100);
			return -1.0;
		};
		aim_target = car_points[0];
		return this->shoot_judge(aim_target);
	}

	float ShootTranslationStrategy::calculate_angle(const cv::Point2f& A, const cv::Point2f& B, const cv::Point2f& C)
	{
		cv::Point2f BA = A - B;
		cv::Point2f BC = C - B;
		double dotProduct = BA.x * BC.x + BA.y * BC.y;
		double magnitudeBA = std::sqrt(BA.x * BA.x + BA.y * BA.y);
		double magnitudeBC = std::sqrt(BC.x * BC.x + BC.y * BC.y);
		double cosTheta = dotProduct / (magnitudeBA * magnitudeBC);
		cosTheta = std::max(std::min(cosTheta, 1.0), -1.0);
		// ȡ����ֵ,ֻҪ֪������ֵ����
		float thetaRadians = std::acos(cosTheta);
		return thetaRadians;
	};

	double ShootBuffer::get_now_time()
	{
		auto now = std::chrono::system_clock::now();
		auto durationSinceEpoch = now.time_since_epoch();
		auto seconds = std::chrono::duration_cast<std::chrono::seconds>(durationSinceEpoch);
		auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(durationSinceEpoch - seconds);
		double fractional_seconds = microseconds.count() * 1e-6;
		return seconds.count() + fractional_seconds;
	}
	PrecisionShootStrategy::PrecisionShootStrategy(RangeSetter* RangeSetter__)
		: ShootMiddleStrategy(RangeSetter__)
	{
		clear();
	}
	float PrecisionShootStrategy::calculate_target(cv::Point3f& aim_target, 
		std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw)
	{
		float rotational_speed = state(7); // rotational_speed > 0,��ת,����ת
		cv::Point2f car_middle2f = this->get_car_middle(car_four_points);
		sort_car_four_points(car_four_points);

		cv::Point3f left_point, right_point;

		if (car_four_points[0].x < car_four_points[1].x) {
			left_point = car_four_points[0];
			right_point = car_four_points[1];
		}
		else {
			left_point = car_four_points[1];
			right_point = car_four_points[0];
		}
		bool turn_right = rotational_speed > 0; // ��ת

		// ȷ�����Ŀ��
		// ���ΪӢ������,���޸�shoot_targetΪ��/��װ�װ�

		cv::Point3f shoot_target = turn_right ? left_point : right_point;
		
		

		aim_target = cv::Point3f(car_middle2f.x, shoot_target.y, car_middle2f.y);

		float shoot_target_angle = get_shoot_face_angle(shoot_target, car_middle2f);

		if (first_time) {
			first_time = false;
			this->last_face_angle = shoot_target_angle;
			return judging_shoot_logic(shoot_target, car_middle2f, state);
		}
		else {
			if (abs(last_face_angle - shoot_target_angle) > 45.0 / 180 * CV_PI) { //����װ�װ��л�,be_shooted��Ϊtrue
				
				if (be_shooted == false && abs(last_face_angle) < 10) { // ��һ֡Ϊfalse,δ����,��������,��֤ÿ��װ�װ御���ܿ��� 
					this->last_face_angle = shoot_target_angle;
					return 0.0;
				};

				be_shooted = false;
			};
			this->last_face_angle = shoot_target_angle;

			return be_shooted ? -1.0 : judging_shoot_logic(shoot_target, car_middle2f, state);
		};
		
	}
	void PrecisionShootStrategy::clear()
	{
		first_time = true;
		be_shooted = false;
		last_face_angle = 0;
	}
	void PrecisionShootStrategy::push_image_timer_differ(float image_timer_differ)
	{
		if (image_timer_differ_queue.size() >= image_timer_differ_queue_max_size)
		{
			image_timer_differ_queue.erase(image_timer_differ_queue.begin());
		};
		image_timer_differ_queue.push_back(image_timer_differ);
	}
	float PrecisionShootStrategy::judging_shoot_logic(cv::Point3f shoot_target, cv::Point2f car_middle2f, const Eigen::VectorXf& state)
	{
		float rotational_speed = state(7);
		bool turn_right = rotational_speed > 0;
		bool loss_more_than_zero = shoot_target.x < 0;
		if ((turn_right ^ loss_more_than_zero) == 1) { // ˵��ǹ��Ŀǰδ����׼Ŀ��δ��������λ
			return -1.0;
		};

		cv::Point2f shoot_target2f(shoot_target.x, shoot_target.z);

		// ��ǹ����Բ�Ľ���
		float radius = cv::norm(car_middle2f - shoot_target2f);
		std::vector<cv::Point2f> intersections = this->find_intersections(car_middle2f, radius);
		if(intersections.size() != 2)  // ˵�����л����޽���
			return -1.0;

		// ȡǹ����Բ�Ľ���,Բ��,Ŀ���ά�����߼н�,���ɼ�����תʱ��
		cv::Point2f near_intersection = intersections[0].y < intersections[1].y ? intersections[0] : intersections[1];
		//float included_angle = this->angleABC(near_intersection, car_middle2f, shoot_target2f);
		float included_angle = this->angleABC(shoot_target2f, car_middle2f, near_intersection);

		// ���㵱ǰ��ת�Ƕ�,��֤����ֵ
		float perfect_shoot_wait_time = abs(included_angle / rotational_speed);

		// ȡ���ž���,���ƺ����ƶ�����������Ч������
		//if (perfect_shoot_wait_time > get_image_timer_differ_average()) return -1.0;
		//this->be_shooted = true;
		//return perfect_shoot_wait_time;

		if (perfect_shoot_wait_time > get_image_timer_differ_average() * 0.5) return -1.0;
		this->be_shooted = true;
		return 0.0;
	};


	float PrecisionShootStrategy::angleABC(cv::Point2f A, cv::Point2f B, cv::Point2f C)
	{
		cv::Point2f BA = A - B;
		cv::Point2f BC = C - B;

		// ���������ĵ��
		double dotProduct = BA.x * BC.x + BA.y * BC.y;
		double magnitudeBA = std::sqrt(BA.x * BA.x + BA.y * BA.y);
		double magnitudeBC = std::sqrt(BC.x * BC.x + BC.y * BC.y);

		// ��ֹ�������
		if (magnitudeBA == 0 || magnitudeBC == 0)
			return 0.0; // ���߸���������󷵻�����ֵ

		double cosTheta = dotProduct / (magnitudeBA * magnitudeBC);

		// ���� cosTheta �� [-1, 1] ��Χ�ڣ���ֹ�������������� acos ��������
		cosTheta = std::max(std::min(cosTheta, 1.0), -1.0);
		double angleRadians = std::acos(cosTheta);
		return angleRadians;
	};

	std::vector<cv::Point2f> PrecisionShootStrategy::find_intersections(cv::Point2f center, float radius)
	{
		std::vector<cv::Point2f> intersections;

		// ���Բ�ĵ� y ��ľ����Ƿ�С�ڻ���ڰ뾶
		if (radius * radius >= center.x * center.x)
		{
			float dy = std::sqrt(radius * radius - center.x * center.x);
			intersections.push_back(cv::Point2f(0, center.y + dy));
			if (dy > 0) // ��������е㣬����ӵڶ�������
			{
				intersections.push_back(cv::Point2f(0, center.y - dy));
			}
		};

		return intersections;
	}

	float PrecisionShootStrategy::get_image_timer_differ_average() const
	{
		if(image_timer_differ_queue.empty()) return 0.01f;
		float image_timer_differ_average = 0;
		for (const auto& x : image_timer_differ_queue) {
			image_timer_differ_average += x;
		};
		return image_timer_differ_average / image_timer_differ_queue.size();
	}

	float PrecisionShootStrategy::get_shoot_face_angle(cv::Point3f shoot_target, cv::Point2f car_middle2d)
	{
		cv::Point2f shoot_target2f(shoot_target.x, shoot_target.z);
		
		float included_angle = abs(angleABC(shoot_target2f, car_middle2d, cv::Point2f(0, 0)));

		if (car_middle2d.x < shoot_target2f.x) included_angle = -included_angle; // �Ҳ೯���ȡ����

		return included_angle;
	};
	
	ShootMiddleStrategy::ShootMiddleStrategy(RangeSetter* RangeSetter__)
		:ShootStrategy(RangeSetter__)
	{
	}

	float ShootMiddleStrategy::calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points,
		const Eigen::VectorXf& state, const float& car_yaw)
	{
		float rotational_speed = state(7); // rotational_speed > 0,��ת,����ת
		cv::Point2f car_middle2f = this->get_car_middle(car_four_points);
		sort_car_four_points(car_four_points);

		aim_target = cv::Point3f(car_middle2f.x, car_four_points[0].y, car_middle2f.y);

		bool canshoot = RangeSetter__->if_middle_yaw_shoot_hit(car_four_points[0], -state(3) - car_yaw)
			|| RangeSetter__->if_middle_yaw_shoot_hit(car_four_points[1], CV_PI / 2 + state(3) + car_yaw);
		
		// ����߼�
		return canshoot ? 0.0 : -1.0;
	};

	cv::Point3f ShootMiddleStrategy::choose_target(std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state)
	{
		float rotational_speed = state(7); // rotational_speed > 0,��ת,����ת
		cv::Point2f car_middle2f = this->get_car_middle(car_four_points);
		sort_car_four_points(car_four_points);

		//cv::Point3f left_point, right_point;

		//if (car_four_points[0].x < car_four_points[1].x) {
		//	left_point = car_four_points[0];
		//	right_point = car_four_points[1];
		//}
		//else {
		//	left_point = car_four_points[1];
		//	right_point = car_four_points[0];
		//};
		//bool turn_right = rotational_speed > 0; // ��ת

		//// ȷ�����Ŀ��
		//cv::Point3f shoot_target = turn_right ? left_point : right_point;

		return cv::Point3f(car_middle2f.x, car_four_points[0].y, car_middle2f.y);
	};

	void ShootDelayer::reset()
	{
		last_time = ShootBuffer::get_now_time();
	}

	bool ShootDelayer::over()
	{
		double now_time = ShootBuffer::get_now_time();
		return (now_time - last_time) > _shoot_delay_time_;
	}

	double ShootDelayer::set_shoot_delay_time(double delay_time)
	{
		return this->_shoot_delay_time_ = delay_time;
	}

	AdaptivePrecisionShootStrategy::AdaptivePrecisionShootStrategy(float max_stability_shoot_frequency,
		RangeSetter* RangeSetter__)
		: max_stability_shoot_frequency(max_stability_shoot_frequency), ShootMiddleStrategy(RangeSetter__)
	{
		clear();
	};

	void AdaptivePrecisionShootStrategy::clear()
	{
		shoot_state = false;
		first_time = true;
		be_shooted = false;
		last_face_angle = 0;
	}
	void AdaptivePrecisionShootStrategy::update_image_timer_differ(float image_timer_differ)
	{
		if (image_timer_differ_queue.size() >= image_timer_differ_queue_max_size)
		{
			image_timer_differ_queue.erase(image_timer_differ_queue.begin());
		};
		image_timer_differ_queue.push_back(image_timer_differ);

	}

	void AdaptivePrecisionShootStrategy::calculate_sustain_shoot_time(float armor_size, const Eigen::VectorXf& state)
	{
		float max_stability_shoot_t = 1.0f / max_stability_shoot_frequency;// ������ʱ��
		float radius = (state(8) + state(9)) / 2;
		float rotate_angle = atan(armor_size / 2 / radius) * 2;
		int grain_size;
		if (abs(state(7)) * 30 / CV_PI < 10) { // ת�ٹ���
			grain_size = 5;
		}
		else {
			float rotate_angle_t = abs(rotate_angle / state(7)); // ���ת��ʱ��
			float ratio = rotate_angle_t / max_stability_shoot_t;
			grain_size = ratio < 2 ? 1 : ratio;
		};
		shoot_sustain_time = (grain_size - 1)* max_stability_shoot_t;
	}
	float AdaptivePrecisionShootStrategy::calculate_target(cv::Point3f& aim_target,
		std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw)
	{
		float rotational_speed = state(7); // rotational_speed > 0,��ת,����ת
		cv::Point2f car_middle2f = this->get_car_middle(car_four_points);
		sort_car_four_points(car_four_points);

		cv::Point3f left_point, right_point;

		if (car_four_points[0].x < car_four_points[1].x) {
			left_point = car_four_points[0];
			right_point = car_four_points[1];
		}
		else {
			left_point = car_four_points[1];
			right_point = car_four_points[0];
		}
		bool turn_right = rotational_speed > 0; // ��ת

		// ȷ�����Ŀ��
		cv::Point3f shoot_target = turn_right ? left_point : right_point;
		aim_target = cv::Point3f(car_middle2f.x, shoot_target.y, car_middle2f.y);

		float shoot_target_angle = PrecisionShootStrategy::get_shoot_face_angle(shoot_target, car_middle2f);

		if (first_time) {
			first_time = false;
			this->last_face_angle = shoot_target_angle;
			return judging_shoot_logic(shoot_target, car_middle2f, state);
		}
		else {
			if (abs(last_face_angle - shoot_target_angle) > 45.0 / 180 * CV_PI) { //����װ�װ��л�,be_shooted��Ϊtrue
				if (be_shooted == false && abs(last_face_angle) < 10) { // ��һ֡Ϊfalse,δ����,��������,��֤ÿ��װ�װ御���ܿ��� 
					this->last_face_angle = shoot_target_angle;
					return 0.0;
				};
				be_shooted = false;
			};
			this->last_face_angle = shoot_target_angle;

			return be_shooted ? -1.0 : judging_shoot_logic(shoot_target, car_middle2f, state);
		};
	}
	;

	float AdaptivePrecisionShootStrategy::judging_shoot_logic(cv::Point3f shoot_target, 
		cv::Point2f car_middle2f, const Eigen::VectorXf& state)
	{
		if (shoot_state) { // �жϿ���
			double now_time = ShootBuffer::get_now_time();
			if(now_time - start_shoot_time < shoot_sustain_time) return 0.0f; // ��������
			
			shoot_state = false;
			return -1.0f;
		};

		float rotational_speed = state(7);
		bool turn_right = rotational_speed > 0;
		bool loss_more_than_zero = shoot_target.x < 0;
		if ((turn_right ^ loss_more_than_zero) == 1) { // ˵��ǹ��Ŀǰδ����׼Ŀ��δ��������λ
			return -1.0;
		};

		cv::Point2f shoot_target2f(shoot_target.x, shoot_target.z);

		// ��ǹ����Բ�Ľ���
		float radius = cv::norm(car_middle2f - shoot_target2f);
		std::vector<cv::Point2f> intersections = PrecisionShootStrategy::find_intersections(car_middle2f, radius);
		if (intersections.size() != 2)  // ˵�����л����޽���
			return -1.0;

		// ȡǹ����Բ�Ľ���,Բ��,Ŀ���ά�����߼н�,���ɼ�����תʱ��
		cv::Point2f near_intersection = intersections[0].y < intersections[1].y ? intersections[0] : intersections[1];
		//float included_angle = this->angleABC(near_intersection, car_middle2f, shoot_target2f);
		float included_angle = PrecisionShootStrategy::angleABC(shoot_target2f, car_middle2f, near_intersection);

		// ���㵱ǰ��ת�Ƕ�,��֤����ֵ,�����ת�����Ļ���Ҫ��ʱ��
		float perfect_shoot_wait_time = abs(included_angle / rotational_speed);
		
		// ���ڸ�����Ƶ,����һ��װ�װ���Ҫ������,������Ƶ��װ�װ�ת��ʱ��������ǰ��

		float advance_shoot_time = shoot_sustain_time / 2;
		perfect_shoot_wait_time -= advance_shoot_time;

		if (perfect_shoot_wait_time > get_image_timer_differ_average() || perfect_shoot_wait_time < 0) return -1.0;

		this->be_shooted = true;
		this->shoot_state = true; // ����Ϊ����״̬
		this->start_shoot_time = ShootBuffer::get_now_time();
		//std::cout << "perfect_shoot_wait_time : " << perfect_shoot_wait_time << std::endl;
		return perfect_shoot_wait_time;
	}
	float AdaptivePrecisionShootStrategy::get_image_timer_differ_average() const
	{
		float image_timer_differ_average = 0;
		for (const auto& x : image_timer_differ_queue) {
			image_timer_differ_average += x;
		}
		return image_timer_differ_average / image_timer_differ_queue.size();
	}
	;

	HeroShootStrategy::HeroShootStrategy(float min_shoot_interval, RangeSetter* RangeSetter__)
		:ShootMiddleStrategy(RangeSetter__)
	{
		ShootBuffer__ = std::make_unique<ShootBuffer>(min_shoot_interval);
	}
	float HeroShootStrategy::calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points, 
		const Eigen::VectorXf& state, const float& car_yaw)
	{
		float rotational_speed = state(7); // rotational_speed > 0,��ת,����ת
		cv::Point2f car_middle2f = this->get_car_middle(car_four_points);
		sort_car_four_points(car_four_points);

		// ѡ��ʹ�װ�װ�
		cv::Point3f shoot_target = car_four_points[0].y > car_four_points[1].y ?
			car_four_points[0] : car_four_points[1];

		aim_target = cv::Point3f(car_middle2f.x, shoot_target.y, car_middle2f.y);

		bool canshoot = RangeSetter__->if_middle_yaw_shoot_hit(shoot_target, -state(3) - car_yaw);

		if (canshoot) {
			if (!ShootBuffer__->drop()) {
				return -1.0;
			}
			return 0.0;
		};
		return -1.0;
	}

	cv::Point3f HeroShootStrategy::choose_target(std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state)
	{
		float rotational_speed = state(7); // rotational_speed > 0,��ת,����ת
		cv::Point2f car_middle2f = this->get_car_middle(car_four_points);
		sort_car_four_points(car_four_points);
		// ѡ��ʹ�װ�װ�
		cv::Point3f shoot_target = car_four_points[0].y > car_four_points[1].y ?
			car_four_points[0] : car_four_points[1];
		return cv::Point3f(car_middle2f.x, shoot_target.y, car_middle2f.y);
	}

	ShootMiddleVagueStrategy::ShootMiddleVagueStrategy(float shooting_time, RangeSetter* RangeSetter__)
		:ShootStrategy(RangeSetter__), shooting_time(shooting_time)
	{
	};

	void ShootMiddleVagueStrategy::get_aim_preview(std::vector<cv::Point3f> car_four_absolute_points,
		std::vector<cv::Point3f> car_four_shoot_points, const Eigen::VectorXf& state)
	{
		// ��׼����
		float rotational_speed = state(7); // ת��,����/s
		float radius = (state(8) + state(9)) / 2; // �뾶ȡ��ֵ

		this->sort_car_four_points(car_four_absolute_points);
		this->sort_car_four_points(car_four_shoot_points);

		cv::Point2f car_absolute_middle2d = this->get_car_middle(car_four_absolute_points);

		// �������������ļн�
		float shortest_face_angle = this->calculate_angle_abs(
			cv::Point2f(0, 0), car_absolute_middle2d, cv::Point2f(car_four_absolute_points[0].x, car_four_absolute_points[0].z)
		);
		float next_face_angle = this->calculate_angle_abs(
			cv::Point2f(0, 0), car_absolute_middle2d, cv::Point2f(car_four_absolute_points[1].x, car_four_absolute_points[1].z)
		);

		// ת�ٳ��Գ����ȡ����ֵ�����������
		float shoot_face_angle_range = shooting_time * abs(rotational_speed);

		// ֻҪ��track_face_angle�����ڴ���װ�װ�,��һֱ����,�����������,��Ԥ��״̬
		if (shoot_face_angle_range < shortest_face_angle && shoot_face_angle_range < next_face_angle) {
			aim_preview = true; // ����Ԥ��״̬
		}
		else {
			aim_preview = false;
		};
	};

	float ShootMiddleVagueStrategy::calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points, 
		const Eigen::VectorXf& state, const float& car_yaw)
	{
		float rotational_speed = state(7); // rotational_speed > 0,��ת,����ת
		cv::Point2f car_middle2f = this->get_car_middle(car_four_points);
		sort_car_four_points(car_four_points);
		// ֱ��ʹ�����Ŀ��߶���Ϊ���Ŀ��,�����������ڻ����³���Ը���
		aim_target = cv::Point3f(car_middle2f.x, car_four_points[0].y, car_middle2f.y);
		// ��ز���ֱ�Ӹ�ֵ
		return aim_preview ? -1.0 : 0.0;
	};
	ShootBufferStrategy::ShootBufferStrategy()
		:ShootStrategy(NULL)
	{
	}
	float ShootBufferStrategy::calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points, 
		const Eigen::VectorXf& state, const float& car_yaw)
	{
		aim_target = car_true_middle;
		return -1.0;
	}
	void ShootBufferStrategy::set_car_true_middle(cv::Point3f car_true_middle)
	{
		this->car_true_middle = car_true_middle;
	}
	AutoTrackStrategy::AutoTrackStrategy(RangeSetter* RangeSetter__, 
		float static_track_face_angle, float switch_reverse_amplification_weight, float max_shoot_x_ratio)
		:static_track_face_angle(static_track_face_angle* CV_PI / 180),
		ShootTrackStrategyBase(RangeSetter__, switch_reverse_amplification_weight),
		max_shoot_x_ratio(max_shoot_x_ratio)
	{
	}
	cv::Point3f AutoTrackStrategy::choose_absolute_target(std::vector<cv::Point3f> car_four_absolute_points,
		std::vector<cv::Point3f> car_four_shoot_points, const Eigen::VectorXf& state, const float& car_yaw)
	{
		float rotational_speed = state(7); // ת��,����/s
		float radius = (state(8) + state(9)) / 2; // �뾶ȡ��ֵ

		this->sort_car_four_points(car_four_absolute_points);
		this->sort_car_four_points(car_four_shoot_points);

		cv::Point2f car_absolute_middle2f = this->get_car_middle(car_four_absolute_points);

		float track_face_angle = static_track_face_angle;

		// �������������ļн�
		float shortest_face_angle = this->calculate_angle_abs(
			cv::Point2f(0, 0), car_absolute_middle2f, cv::Point2f(car_four_absolute_points[0].x, car_four_absolute_points[0].z)
		);
		float next_face_angle = this->calculate_angle_abs(
			cv::Point2f(0, 0), car_absolute_middle2f, cv::Point2f(car_four_absolute_points[1].x, car_four_absolute_points[1].z)
		);

		// ��ȡ�����������жϷ�Χ
		float max_shoot_x = abs(cos(state(3))) * RangeSetter__->get_max_shoot_x() * this->max_shoot_x_ratio;

		if (track_face_angle < shortest_face_angle && track_face_angle < next_face_angle) {

			// ����Ƕȷ�Χ����,�ض�Ԥ�鲢�ر���ǰԤ��
			advance_aim_preview = false;

			// ��ȡ��ǰ���Ŀ��
			cv::Point3f right_point, left_point;
			if (car_four_shoot_points[0].x < car_four_shoot_points[1].x) {
				left_point = car_four_shoot_points[0];
				right_point = car_four_shoot_points[1];
			}
			else {
				left_point = car_four_shoot_points[1];
				right_point = car_four_shoot_points[0];
			}
			cv::Point3f shoot_target = rotational_speed > 0 ? left_point : right_point;
			
			// �ж��Ƿ���ǰ����
			if (abs(shoot_target.x) < max_shoot_x) {
				advance_shoot = true;
			};

			return preview_func(car_four_absolute_points, car_four_shoot_points, car_absolute_middle2f,
				radius, rotational_speed, track_face_angle);
		}
		else { // ����Ƕ���СĿ��
			advance_shoot = false; // ����track�Ƕ���,��ǰ����ر�

			if (advance_aim_preview) { // ��ǰԤ��
				return preview_func(car_four_absolute_points, car_four_shoot_points, car_absolute_middle2f,
					radius, rotational_speed, track_face_angle);
			};
			// �жϵ�ǰǹ���Ѿ��ͺ�
			// TODO:����ʹ��max_shoot_x��Ϊ�жϿ�����ʧ�߻���Ч��
			if (car_four_shoot_points[0].x - max_shoot_x > 0) {
				advance_aim_preview = true;
				return preview_func(car_four_absolute_points, car_four_shoot_points, car_absolute_middle2f,
					radius, rotational_speed, track_face_angle);
			};

			aim_preview = false;
			return shortest_face_angle < next_face_angle ? car_four_absolute_points[0] : car_four_absolute_points[1];
		};
	}
	float AutoTrackStrategy::calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points, 
		const Eigen::VectorXf& state, const float& car_yaw)
	{
		if(advance_shoot) return 0.0;
		return aim_preview ? -1.0 : 0.0; // ֻҪ��Ԥ��ͻ���
	}
	cv::Point3f AutoTrackStrategy::preview_func(std::vector<cv::Point3f> car_four_absolute_points,
		std::vector<cv::Point3f> car_four_shoot_points, cv::Point2f car_absolute_middle2f,
		float radius, float rotational_speed, float track_face_angle)
	{
		aim_preview = true; // ʹ��Ԥ�麯��,����Ԥ��Ϊtrue

		// ȷ�ϸ߶�
		cv::Point3f right_point, left_point;
		if (car_four_shoot_points[0].x < car_four_shoot_points[1].x) {
			left_point = car_four_absolute_points[0];
			right_point = car_four_absolute_points[1];
		}
		else {
			left_point = car_four_absolute_points[1];
			right_point = car_four_absolute_points[0];
		}
		float height = rotational_speed > 0 ? left_point.y : right_point.y;

		// ȷ��Ԥ��λ��xz
		// ��ת,ȡ��ʱ��
		cv::Point2f aim_point2f = calculate_rotate_point2f(car_absolute_middle2f, radius,
			rotational_speed > 0 ? CV_PI - track_face_angle : CV_PI + track_face_angle);

		return cv::Point3f(aim_point2f.x, height, aim_point2f.y);
	}
	;
	ShootTrackStrategyBase::ShootTrackStrategyBase(float switch_reverse_amplification_weight)
		:switch_reverse_amplification_weight(switch_reverse_amplification_weight), ShootStrategy()
	{
	}
	ShootTrackStrategyBase::ShootTrackStrategyBase(RangeSetter* RangeSetter__, float switch_reverse_amplification_weight)
		:ShootStrategy(RangeSetter__), switch_reverse_amplification_weight(switch_reverse_amplification_weight)
	{
	}
	bool ShootTrackStrategyBase::get_aim_preview() const
	{
		return aim_preview;
	}
	float ShootTrackStrategyBase::get_switch_reverse_amplification_weight() const
	{
		return switch_reverse_amplification_weight;
	}
};