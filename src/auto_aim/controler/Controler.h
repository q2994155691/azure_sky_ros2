#ifndef _CONTROLER_H_
#define _CONTROLER_H_


#include"PitchCompensator/PitchCompensator.h"
#include"RangeSetter/RangeSetter.h"
#include"ShootStrategy/ShootStrategy.h"
#include"ShootStrategy/StrategyPlanner/StrategyPlanner.h"
#include"TimePredictor/TimePredictor.h"
#include"TransControler.h"
#include"../processor/CarSolver/CarSolver.h"
#include"../processor/Coordinate/Coordinate.h"

namespace rm
{
	/*
	* �����߼�
	* �����߼���Լ�,����״̬��ģ��.*���������ϵ���ж�*
	* ״̬��:��׼���� / ������� / ��Ͽ��� / �������� / ȡ������
	* ��׼����: �趨ˢ��Ƶ��,ֻ�������������Ž�򳬹����Ž�ʱ,�Ŵ���1
	* �������: ֻҪ��׼,���ܿ���,����1
	* ƽ������: ������װ�װ���ת�����
	* ��׼����: ÿ��װ�װ御������ת������ʱ����
	* ��Ͽ���:����һ�����,�������ֻ�ܷ����ڼ��֮��
	* ��������:һֱ����1
	* ȡ������:һֱ����0
	*
	* ����ͨѶ���������: 
			pitch,
			yaw, 
			yaw_speed,
			canshoot,
			move_state,
			ifget,
			enemy_kind,
			enemy_x,
			enemy_y,
	*/
	class Controler
	{
		Coordinate* Coordinate__;
		PitchCompensator* PitchCompensator__;
		RangeSetter* RangeSetter__;
		TimePredictor* TimePredictor__;
		ShootTrackStrategyBase* ShootTrackStrategy__;
		ShootMiddleStrategy* ShootMiddleStrategy__;
		HeroShootStrategy* HeroShootStrategy__;
		PrecisionShootStrategy* PrecisionShootStrategy__;
		ShootTranslationStrategy* ShootTranslationStrategy__;
		ShootMiddleVagueStrategy* ShootMiddleVagueStrategy__;
		StrategyPlanner* StrategyPlanner__;
		ShootDelayer ShootDelayer_; // ����Ŀ��ʱ�����ӳ�
	public:
		Controler() = default;
		Controler(
			Coordinate* Coordinate__,
			PitchCompensator* PitchCompensator__,
			RangeSetter* RangeSetter__,
			TimePredictor* TimePredictor__,
			ShootTrackStrategyBase* ShootTrackStrategy__,
			ShootMiddleStrategy* ShootMiddleStrategy__,
			HeroShootStrategy* HeroShootStrategy__,
			PrecisionShootStrategy* PrecisionShootStrategy__,
			ShootTranslationStrategy* ShootTranslationStrategy__,
			ShootMiddleVagueStrategy* ShootMiddleVagueStrategy__,
			StrategyPlanner* StrategyPlanner__,
			float delay_shooting_param,
			StrategyPlanner::STATE state = StrategyPlanner::STATE::shoot_default);
	public:
		// ���ڵ����Ŀ��Ʋ�,��������۷����ӳ����Ž�,�����ڵ���������������
		TransControler iteration_control(int target_kind, float program_timer_differ, Eigen::VectorXf car_state,
			Eigen::VectorXf trans_state, const float& car_yaw, const float& car_pitch, const float& car_yaw_speed, const int& grade);

	public: // debug

		StrategyPlanner::STATE get_controler_state() const;

		// ����׼Ŀ��,���ܹ����,�������
		cv::Mat draw_aim_targets(cv::Mat src, bool canshoot,  const float& car_yaw, const float& car_pitch,
			cv::Scalar color, int radius = 30, int thickness = 5);
		
		cv::Point3f debug_absolute_aim_target;
		
		Eigen::VectorXf last_pred_state; // Ԥ����״̬
		Eigen::VectorXf last_true_state; // ��ǰ״̬
	private: // ��ȡ�ٶ�����
		// ����״̬��״̬����
		TransControler update_by_state(
			const std::vector<cv::Point3f>& pred_car_four_points_shoot,
			const std::vector<cv::Point3f>& pred_car_four_points_absolute,
			const Eigen::VectorXf& pred_state, const float& car_yaw, const float& car_pitch, const float& car_yaw_speed);

		// ����ƽ���ٶ�
		float solve_yaw_trans_speed(cv::Point3f aim_target_absolute,
			const float& send_yaw, const Eigen::VectorXf& state, const float& car_yaw, const float& car_pitch, const float& car_yaw_speed);

		// ������ת�ٶ�
		float solve_yaw_rotate_speed(cv::Point3f aim_target_absolute,
			const float& send_yaw, const Eigen::VectorXf& state, const float& car_yaw, const float& car_pitch, const float& car_yaw_speed);

		// �Ƶ���ת
		cv::Point2f rotate_point(const cv::Point2f& center, const cv::Point2f& point, float angle);

	private:
		void clear();
		bool lock = 0; // ����ģʽ,�����и���
		StrategyPlanner::STATE state; // ��ǰ״̬
	
	private:
		cv::Point3f last_absolute_aim_target;
		bool last_iteration;
	private: // ����֡
		int last_target_kind; // ��һ������Ŀ��
	};
};

#endif // _CONTROLER_H_
