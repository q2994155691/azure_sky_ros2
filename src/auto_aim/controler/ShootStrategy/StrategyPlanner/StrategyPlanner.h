#ifndef _STRATEGYPLANNER_H_
#define _STRATEGYPLANNER_H_
#include<Eigen/Dense>
#include<opencv2/opencv.hpp>
namespace rm
{
	/*
	* ���߹滮��
	* ������߹���
	* ���ڲ�ͬ����,��״̬��Ϣ���д���
	*/
	class StrategyPlanner
	{
	public:
		// ״̬��ģ��
		enum STATE
		{
			shoot_default = 0,			// Ĭ��ģʽ
			shoot_track,		// ����ģʽ
			shoot_middle,		// ���Ļ���ģʽ
			shoot_precise,		// ��׼����ģʽ
			shoot_translation,	// ƽ������ģʽ
			shoot_vague,		// ģ������ģʽ
			shoot_hero,			// Ӣ�����ģʽ
		};
	public:
		StrategyPlanner() = default;
		StrategyPlanner(float min_shoot_track_rpm,
			float min_shoot_middle_rpm,
			float min_shoot_precise_rpm,
			float min_shoot_track_distance,
			float max_shoot_track_distance
			);
		// ���Ը���
		STATE state_update(Eigen::VectorXf car_state, const int& grade);
	private:
		float min_shoot_track_rpm; // ��С����rpm
		float min_shoot_middle_rpm;	// ��С��׼����rpm
		float min_shoot_precise_rpm;// ��С��׼����rpm
		float min_shoot_track_distance; // ����ģʽ������С���
		float max_shoot_track_distance; // ����ģʽ����������
	};
}

#endif // !_STRATEGYPLANNER_H_
