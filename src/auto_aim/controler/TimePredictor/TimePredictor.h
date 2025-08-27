#ifndef _TIMEPREDICTOR_H_
#define _TIMEPREDICTOR_H_
#include"../PitchCompensator/PitchCompensator.h"
#include<Eigen/Dense>
#include<opencv2/opencv.hpp>
#include<iostream>
namespace rm
{
	/*
	* ʱ��Ԥ����
	*/
	class TimePredictor
	{
	public:
		TimePredictor() {};
		// �����û�ʹ��rpmΪ��λ min_track_rpm * 6 = min_track_rotational_speed * 180 / CV_PI
		TimePredictor(float shoot_delay, float bullet_speed, float serial_delay);
	public:
		// ����ʱ��Ԥ��,ֱ��ʹ�õ㵽��
		float simple_time_predict(Eigen::VectorXf state, float program_timer_differ);
		// ���ڲ����ǵ�Ԥ��
		float time_predict(PitchCompensator* PitchCompensator__,Eigen::VectorXf state, float program_timer_differ);
		// ֱ�Ӷ������λ�ý���ӳ��
		float time_predict(PitchCompensator* PitchCompensator__, cv::Point3f last_absolute_aim_target, float program_timer_differ);
	private:
		float bullet_speed; // ����
		float shoot_delay; // �����ӳ�
		float serial_delay; // ͨѶ�ӳ�
	};
}
#endif // !_TIMEPREDICTOR_H_
