#ifndef _DUALANGLEOBSERVER_H_
#define _DUALANGLEOBSERVER_H_
#include"../../ArmorSolver/FaceAngleSolver/FaceAngleSolver.h"
#include<iostream>
#include<vector>

namespace rm 
{
	/*
	* ������Ż���
	* ˫�������ʱ�����һ���Ƕȵļ������
	* ��������Ǿ��ȿ��ܲ���,���о�������
	*/
	class AngleOptimizer
	{
	public:
		AngleOptimizer();
		AngleOptimizer(float min_angle_error, float min_update_angle = 40, float max_update_angle = 50);
		// �۲�,�����ع۲����������
		// ��֤�������Ϊ
		std::vector<float> observe(const std::vector<float>& inputs,const float& car_yaw);
		// ��������Ƕ�����
		void correct_face_angle(ArmorPos& left_armor_pos, ArmorPos& right_armor_pos, const float& car_yaw);
	private:
		float min_angle_error; // ��С�Ƕ����,���������,��ѡ��ǶȾ���ֵ�ϴ�ֵΪ�۲���,��λΪ�Ƕ�
		float min_update_angle, max_update_angle; // �����һ����Χ�ڲŸ��°뾶
	};

	/*
	* �뾶�Ż���
	* �뾶�ľ��ȿ��ܲ���,ʹ�ö��в��ϸ��µ������İ뾶ȡ��ֵ
	*/
	class RadiusOptimizer
	{
	public:
		RadiusOptimizer() { this->queue_length = 10; };
		RadiusOptimizer(int queue_length);
		// �۲�,�����ع۲����������
		// ��֤�������Ϊ
		void observe(float& high_armor_radius,float& low_armor_radius, float& height_low_differ);
		void clear();
	private:
		int queue_length; // ���г���
		// ��/��װ�װ����
		std::vector<float> high_armor_radius_queue;
		std::vector<float> low_armor_radius_queue;
		std::vector<float> height_low_differ_queue;
	};


}

#endif // !_DUALANGLEOBSERVER_H_
