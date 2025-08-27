#include"StrategyPlanner.h"

namespace rm
{
	StrategyPlanner::StrategyPlanner(float min_shoot_track_rpm,
		float min_shoot_middle_rpm,
		float min_shoot_precise_rpm,
		float min_shoot_track_distance,
		float max_shoot_track_distance)
		:min_shoot_track_rpm(min_shoot_track_rpm),
		min_shoot_middle_rpm(min_shoot_middle_rpm),
		min_shoot_precise_rpm(min_shoot_precise_rpm),
		min_shoot_track_distance(min_shoot_track_distance),
		max_shoot_track_distance(max_shoot_track_distance)
	{
	}
	StrategyPlanner::STATE StrategyPlanner::state_update(Eigen::VectorXf car_state, const int& grade)
	{

		// ���Զ������״̬����!

		float rpm_abs = abs(car_state(7) * 30 / CV_PI);
		float distance = cv::norm(cv::Point2f(car_state(0), car_state(2)));




		////////////////////////////////////////////////////////////////////////////
		// Ӣ������
		//if (rpm_abs < 7.0) {
		//	return STATE::shoot_translation; // ֻҪת�ٹ���,�Ͳ�ȡƽ�ƻ���
		//}
		//else if (rpm_abs < 20.0) // ��׼ÿ��װ�װ����Ļ���
		//{
		//	return STATE::shoot_middle;
		//}
		//else {
		//	return STATE::shoot_hero;
		//}

		////////////////////////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////////////////////////
		// ��������
		if (rpm_abs < min_shoot_track_rpm) {
			return STATE::shoot_translation; // ֻҪת�ٹ���,�Ͳ�ȡƽ�ƻ���
		};

		if (rpm_abs > min_shoot_precise_rpm) {
			return STATE::shoot_precise;
		}
		else if (rpm_abs > min_shoot_middle_rpm) { // ���ڼ�������
			return STATE::shoot_middle;
		}
		else if (distance > max_shoot_track_distance || distance < min_shoot_track_distance) { // ���볬������ģʽ���,����Ϊ��׼����
			return STATE::shoot_middle;
		}
		else if (grade < 3) { // �ȼ�С��3,��׼����
			return STATE::shoot_middle;
		}
		else {
			return STATE::shoot_track; // �������ģʽ
		};
		////////////////////////////////////////////////////////////////////////////
	};


}