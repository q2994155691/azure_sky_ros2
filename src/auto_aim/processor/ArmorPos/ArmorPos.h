#ifndef _ARMORPOS_H_
#define _ARMORPOS_H_
#include<Eigen/Dense>
#include<opencv2/opencv.hpp>
#include<iostream>
#include<vector>
namespace rm
{
	/*
	* װ�װ���
	* �ڽ����������װ�װ����עλ�ú���̬
	* ���ڻ�ת������������ϵ�½��м���,���ǽ��迼��װ�װ�ľ�������ϵ����
	*/
	class ArmorPos
	{
	public:
		ArmorPos() {
			small_armor = true;
			light_loss = false;
			kind = 0;
			pixel_four_point = {};
			absolute_four_point = {};
			absolute_middle_point = cv::Point3f();
			face_angle = 0;
		};
		// ͼ���ĵ�
		std::vector<cv::Point2f> pixel_four_point;
		// ��������ϵ���ĵ�����
		std::vector<cv::Point3f> absolute_four_point;
		// ��������ϵ��װ�װ�����λ��
		cv::Point3f absolute_middle_point;
		// ���Գ����,ȫ�����û�����
		float face_angle;
		// С��װ�װ�
		bool small_armor;
		// ����
		int kind;
		// ȱʧ������װ�װ�
		bool light_loss;
	};


}

#endif // !_ARMORPOS_H_
