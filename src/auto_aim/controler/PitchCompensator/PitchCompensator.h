#ifndef _PITCHCOMPENSATOR_H_
#define _PITCHCOMPENSATOR_H_

#include<Eigen/Dense>
#include<opencv2/opencv.hpp>
namespace rm
{
	/*
	* ����pitcḩ����
	* ��������̧�������׼��ά��
	*/
	class PitchCompensator
	{
	public:
		PitchCompensator() = default;
		PitchCompensator(const std::function<float(const float&)>& horizontal_distance_correct_func,
			float bullet_speed, float pitch_compensation_amplitude);
		PitchCompensator(float bullet_speed, float pitch_compensation_amplitude);
	public:
		cv::Point3f pitch_equation_solve(cv::Point3f target_point);
		
		cv::Point3f solve_pitch_fly_delay_amplitude(float& fly_delay, cv::Point3f target_point);
		// �ο����ĵ��������ӳ�
		cv::Point3f solve_pitch_fly_delay(float& fly_delay, cv::Point3f target_point);
	private:
		// ˮƽ������������
		std::function<float(const float&)> horizontal_distance_correct_func;
	private:
		float bullet_speed; // ����
		const float GRAVITY = 9.78; // ��������
		float pitch_compensation_amplitude; // pitch����ռ��
	};
}

#endif // !PITCHCOMPENSATOR
