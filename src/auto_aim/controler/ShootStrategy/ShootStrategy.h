#ifndef _SHOOTSTRATEGY_H_
#define _SHOOTSTRATEGY_H_
#include"../RangeSetter/RangeSetter.h"
#include"../../processor/Coordinate/Coordinate.h"
#include<iostream>
#include<Eigen/Dense>
#include<opencv2/opencv.hpp>
#include <cmath>
namespace rm
{
	/************************
	* ʱ��򵯻�����
	************************/
	class ShootBuffer
	{
	public:
		ShootBuffer() :min_time_stamp(0.5) { last_time = 0; };
		ShootBuffer(double min_time_stamp)
			:min_time_stamp(min_time_stamp)
		{
			last_time = 0;
		};
		// ����,��ʼlast_timeΪ0,�ظ���
		bool drop(double time = get_now_time()) {
			double time_stamp = time - last_time;
			if (time_stamp > min_time_stamp) {
				last_time = time;
				return true;
			}
			return false;
		};
		// ��ȡ��ǰʱ��
		static double get_now_time();

	private:
		// ���ͨ��ʱ��,Ҳ�ǲο�ʱ��
		double last_time;
		// ��Сʱ���
		const double min_time_stamp;
	};

	/************************
	* �����ӳ���
	************************/
	class ShootDelayer
	{
	public:
		ShootDelayer() = default;
	public:
		void reset(); // ����
		bool over(); // �жϽ���
		double set_shoot_delay_time(double delay_time);
	private:
		double last_time;
		double _shoot_delay_time_ = 0; // �趨�ӳ�ʱ��
	};


	/*
	* ���������,���ݵз���״̬
	* ����Ԥ��ʱ����Ŀ��λ��
	* ��ȡ��׼Ŀ��ͻ���ʱ��
	*/
	class ShootStrategy
	{
	protected:
		RangeSetter* RangeSetter__;
	public:
		ShootStrategy() = default;
		ShootStrategy(RangeSetter* RangeSetter__);
		virtual ~ShootStrategy() {};
	public:
		// ����Ԥ���ĵз��������ϵ�µ��ĵ�,��ȡ��ǰ����׼Ŀ��,����Ŀ�겻Ϊ�û��ṩ
		// �����ܹ�������ӳ�ʱ��,-1��ʾ���ܻ���
		virtual float calculate_target(cv::Point3f& aim_target,
			std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw) = 0;
	protected:
		float shoot_time = -1; // ���ܹ������ʱ�����ʱ���
		// �ĵ㰴�վ�������
		void sort_car_four_points(std::vector<cv::Point3f>& car_four_points);
		// ��ȡ�����Ķ�ά����
		cv::Point2f get_car_middle(const std::vector<cv::Point3f>& car_four_points);
		// �����ABC�ĽǶ�
		float calculate_angle_abs(const cv::Point2f& A, const cv::Point2f& B, const cv::Point2f& C);
		// ��ȡ��������ҵ�
		void get_left_right_points(cv::Point3f& left_point, cv::Point3f& right_point,
			const std::vector<cv::Point3f>& sorted_car_four_points);
		// ����ж�
		float shoot_judge(const cv::Point3f& shoot_target);
	};



	/*
	* ������Ĳ���
	* ��Զ��������׼��������
	* ����װ�װ�
	*/
	class ShootMiddleStrategy : public ShootStrategy
	{
	public:
		ShootMiddleStrategy() = default;
		ShootMiddleStrategy(RangeSetter* RangeSetter__);
		virtual ~ShootMiddleStrategy() {};
	public:
		// ���������ʷ��Ϣ
		virtual void clear() {};

		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw) override;

		//ѡ��Ŀ��
		virtual cv::Point3f choose_target(std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state);
	};


	/*
	* ��ȷ�������
	* �̳�������Ĳ���
	* ˼�����:ÿ��ת��ǹ�ڵ�װ�װ���ҽ�����һ��
	*/
	class PrecisionShootStrategy : public ShootMiddleStrategy
	{
	public:
		PrecisionShootStrategy() = default;
		PrecisionShootStrategy(RangeSetter* RangeSetter__);
	public:
		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw) override;
		// ��Ŀ���л���Ϊ��,����
		void clear() override;
		// ����
		void push_image_timer_differ(float image_timer_differ);
	private:
		// �����߼�
		// �������װ�װ�,���ǹ�����,�������Ŀ��
		// ǹ��δ���,��Ϊǹ���복������Ծ�ֹ,����װ�װ嵽ǹ�����ʱ��ʱ�����Ϊ��
		float judging_shoot_logic(cv::Point3f shoot_target, cv::Point2f car_middle2f, const Eigen::VectorXf& state);
	public:
		// ��ȡ�������
		static float get_shoot_face_angle(cv::Point3f shoot_target, cv::Point2f car_middle2f);
		// ����н�
		static float angleABC(cv::Point2f A, cv::Point2f B, cv::Point2f C);
		// ����Բ��x=0�Ľ���
		static std::vector<cv::Point2f> find_intersections(cv::Point2f center, float radius);
	private:
		float get_image_timer_differ_average() const;
		// ��������Ϊ�ж��ܷ�����֡���߼��ж�
		std::vector<float> image_timer_differ_queue;
		int image_timer_differ_queue_max_size = 10;
	private:
		bool first_time;
		bool be_shooted; // �Ƿ��ѱ�����
		float last_face_angle; // ��ǵľ��Գ����
	};

	/*
	* ����Ӧ��ȷ�������
	* ˼�����:��������ȶ���Ƶ���������ʱ������,һ��װ�װ��㹻��������ʱ����ӳٺ��ڼ��������������������
	*/
	class AdaptivePrecisionShootStrategy : public ShootMiddleStrategy
	{
	public:
		AdaptivePrecisionShootStrategy() = default;
		AdaptivePrecisionShootStrategy(float max_stability_shoot_frequency, RangeSetter* RangeSetter__);

		void clear() override;
		// װ��ʱ���
		void update_image_timer_differ(float image_timer_differ);

		// �������ʱ��
		// ������Ƶ,װ�װ�ߴ�,ת��
		void calculate_sustain_shoot_time(float armor_size, const Eigen::VectorXf& state);

		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw) override;

	private:
		// �����߼�:
		// ��⵱ǰ�����Ż����ʱ��,ʱ��С��֡����ӳٻ���,�ҽ��뷢��״̬
		// �ڿ������ʱ����,Ĭ��ֱ�ӿ���
		float judging_shoot_logic(cv::Point3f shoot_target, cv::Point2f car_middle2f, const Eigen::VectorXf& state);
		
	private:
		bool shoot_state;
		// ��ʼ����ʱ��
		double start_shoot_time;
		// �������ʱ��
		double shoot_sustain_time;
	private:
		// ����ȶ���Ƶ
		float max_stability_shoot_frequency;
		float get_image_timer_differ_average() const;
		// ʱ�������,����ȡ����ƽ��
		int image_timer_differ_queue_max_size = 5;
		std::vector<float> image_timer_differ_queue;
	private:
		bool first_time;
		bool be_shooted; // �Ƿ��ѱ�����
		float last_face_angle; // ��ǵľ��Գ����
	};

	class ShootTrackStrategyBase : public ShootStrategy
	{
	public:
		ShootTrackStrategyBase() = default;
		ShootTrackStrategyBase(float switch_reverse_amplification_weight);
		ShootTrackStrategyBase(RangeSetter* RangeSetter__, float switch_reverse_amplification_weight);

		// �滮����Ŀ��
		virtual cv::Point3f choose_absolute_target(std::vector<cv::Point3f> car_four_absolute_points,
			std::vector<cv::Point3f> car_four_shoot_points,
			const Eigen::VectorXf& state, const float& car_yaw) = 0;
		
		bool get_aim_preview() const;

		// ��ȡ�л�����
		float get_switch_reverse_amplification_weight() const;

	protected:
		bool aim_preview; // Ԥ��
		float switch_reverse_amplification_weight; // �л�����
		// ������ת��ĵ�
		// rotate_angleΪ����ֵ,���ȵ�λΪ����
		cv::Point2f calculate_rotate_point2f(const cv::Point2f& car_middle2f, float radius, float rotate_angle);
	};

	/*
	* ����������
	* ��ǰ����Ϊ�ֶ�����,�ؼ��ǳ���ǲ���
	* �ṩ����չ�ĳ���Ǽ��㺯������
	*/
	class ShootTrackStrategy : public ShootTrackStrategyBase
	{
	public:
		ShootTrackStrategy() = default;
		ShootTrackStrategy(bool ignore_min_shoot_x,float switch_reverse_amplification_weight,
			const std::function<float(const Eigen::VectorXf&)>& track_face_angle_func,
			RangeSetter* RangeSetter__);
		//ShootTrackStrategy(bool ignore_min_shoot_x, const float& static_max_stability_track_rpm,
		//	const float& track_rotate_speed_acceleration_buffer_k,
		//	RangeSetter* RangeSetter__);
	public: // ����debug
		float last_track_face_angle = 0;
	public:
		// �򷵻ؾ�������ϵ
		cv::Point3f choose_absolute_target(std::vector<cv::Point3f> car_four_absolute_points,
			std::vector<cv::Point3f> car_four_shoot_points,
			const Eigen::VectorXf& state, const float& car_yaw) override;
		
		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points,
			const Eigen::VectorXf& state, const float& car_yaw) override;
		// ��ȡ��ǰ�Ƿ�ΪԤ��
		bool get_aim_preview() const;
		// ��ȡ�л�����
		float get_switch_reverse_amplification_weight() const;
	private:
		// ������泯��Ǻ���,���Ϊ����ֵ,Ĭ�ϲ��ü򵥱�������
		std::function<float(const Eigen::VectorXf&)> track_face_angle_func;
		// ����Ӧ�������Ƕ�
		float adaptive_calculate_track_face_angle(const Eigen::VectorXf& state);
		float static_max_stability_track_rotate_speed; // �������ȶ������ٶ�
		float track_rotate_speed_acceleration_buffer_k;  // ������ٻ���б��
		float calculate_rotate_cost(float track_face_angle, float rotate_speed_abs,
			float static_max_stability_track_rotate_speed);
	private:
		bool ignore_min_shoot_x; // ֻҪ��track,�Ϳ���

	};

	/*
	* ��Ͽ������
	*/
	class ShootStepStrategy : public ShootStrategy
	{
		ShootBuffer* ShootBuffer__;
	public:
		ShootStepStrategy() = default;
		ShootStepStrategy(float setting_shoot_interval);
		~ShootStepStrategy();
	public:
		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points,
			const Eigen::VectorXf& state, const float& car_yaw) override;
	};

	/*
	* �����������
	*/
	class ShootSustainStrategy : public ShootStrategy
	{
	public:
		ShootSustainStrategy();
	public:
		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points,
			const Eigen::VectorXf& state, const float& car_yaw) override;
	};

	/*
	* �����������
	*/
	class ShootCancelStrategy : public ShootStrategy
	{
	public:
		ShootCancelStrategy();
	public:
		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points,
			const Eigen::VectorXf& state, const float& car_yaw) override;
	};

	/*
	* ƽ������ģʽ,��Ҫ����װ�װ����Ȼ���ʶ�𵽵�Ŀ��
	*
	*/
	class ShootTranslationStrategy : public ShootStrategy
	{
	public:
		ShootTranslationStrategy() = default;
		ShootTranslationStrategy(RangeSetter* RangeSetter__);
	public:
		void clear();
		// ƽ��Ŀ��ѡ����,��Ҫ�ṹ����Ҫ�Ż�
		// ��������һֱ֪��Ŀ����ĵ��Լ���ؽǶ�,���ݾ�������ϵ�ĵ��car_yaw�������Ŀ�곯��Ƕ�
		// ������ĵ�һ����ʹ��ƽ�ƹ۲������µ�
		cv::Point3f translation_target_choose(Coordinate* Coordinate__, std::vector<cv::Point3f> shoot_car_four_points,
			const float& car_yaw, const float& car_pitch);

		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_points,
			const Eigen::VectorXf& state, const float& car_yaw) override;
	private:
		// ����ƫת��
		float calculate_angle(const cv::Point2f& A, const cv::Point2f& B, const cv::Point2f& C);
	private:
		float last_abs_shoot_yaw; // ��һ������Ŀ��ľ��Խ� 
	};

	/*
	* ����ʱ�����������һ��װ�װ�����Ļ������
	* ����Ӣ��
	*/
	class HeroShootStrategy : public ShootMiddleStrategy
	{
		std::unique_ptr<ShootBuffer> ShootBuffer__;
	public:
		HeroShootStrategy() = default;
		HeroShootStrategy(float min_shoot_interval, RangeSetter* RangeSetter__);
	public:
		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state, const float& car_yaw) override;
		cv::Point3f choose_target(std::vector<cv::Point3f> car_four_points, const Eigen::VectorXf& state) override;
	};

	/*
	* ģ���������
	* ��׼����,��һ������Ƿ�Χ��һֱ���
	* TODO:���Ը�Ϊ��ʱ��Ϊ����,����ת�ٵõ�����Ӧ�ĽǶ�
	*/
	class ShootMiddleVagueStrategy : public ShootStrategy
	{
	public:
		ShootMiddleVagueStrategy() = default;
		ShootMiddleVagueStrategy(float shooting_time,RangeSetter* RangeSetter__);
	public:
		void get_aim_preview(std::vector<cv::Point3f> car_four_absolute_points,
			std::vector<cv::Point3f> car_four_shoot_points,
			const Eigen::VectorXf& state);
		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points,
			const Eigen::VectorXf& state, const float& car_yaw) override;
	private:
		float shooting_time; // ����ʱ������
		bool aim_preview;
	};

	/*
	* ������ģʽ
	* �����ڱ�ʶ��Ŀ���,�ȶ�����Ŀ�������
	* ֻ����׼��ʵĿ��,�Ҳ��Ὺ��
	*/
	class ShootBufferStrategy : public ShootStrategy
	{
	public:
		ShootBufferStrategy();

		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points,
			const Eigen::VectorXf& state, const float& car_yaw) override;

		void set_car_true_middle(cv::Point3f car_true_middle);

	private:
		cv::Point3f car_true_middle;
	};

	/*
	* ����Ӧ�������
	* �����ø����,��������2�ɽ���������㡣���㷨��������ת�ٹ�����Ŀ��
	* ����Ӧ�������Ŀ����ж���ȫ����
	* TODO: ��Ҫ��֤�ӵ������ϵ������۲��װ�װ���
	*/
	class AutoTrackStrategy : public ShootTrackStrategyBase
	{
	public:
		AutoTrackStrategy() = default;
		AutoTrackStrategy(RangeSetter* RangeSetter__, 
			float static_track_angle, float switch_reverse_amplification_weight,float max_shoot_x_ratio);
		/*
		* ���з���ת���̻���Ϊ: ��Խ�������� - ͨ���������� - ��Խ�������� - ͨ���������� ...
		* ���з����ڳ�Խ��������,��׼Ԥ��ǲ����ܹ�����ʱ����aim_preview=false,��������,ֱ���ж���ҪԤ��,ֹͣ����
		* �ж���ҪԤ��: 
			1. ǹ�����з�װ�װ�(������ܴ�������,��Ϊ��ʼ����ʱ���ܻ����)
			2. ����Ԥ���
		  �жϿ����߼�:
			1. aim_preview=true,����װ�װ峯���������min_shoot_x,һ���ܹ�����,aim_preview=false
			2. һ���ж���ҪԤ��,aim_preview=true,���򱣳�aim_preview=falseһֱ���
		* 
		*/

		cv::Point3f choose_absolute_target(std::vector<cv::Point3f> car_four_absolute_points,
			std::vector<cv::Point3f> car_four_shoot_points, const Eigen::VectorXf& state, const float& car_yaw) override;
		
		float calculate_target(cv::Point3f& aim_target, std::vector<cv::Point3f> car_four_points,
			const Eigen::VectorXf& state, const float& car_yaw) override;

	private:
		// Ԥ�麯��
		cv::Point3f preview_func(std::vector<cv::Point3f> car_four_absolute_points,
			std::vector<cv::Point3f> car_four_shoot_points,cv::Point2f car_absolute_middle2f,float radius,
			float rotational_speed,float track_face_angle);

	private:
		float static_track_face_angle; // ��̬�����
		float max_shoot_x_ratio; // ���ű���
		bool advance_aim_preview = false; // ��ǰԤ��
		bool advance_shoot = false; // ��ǰ����
	};


};


#endif // !_SHOOTSTRATEGY_H_
