#ifndef _ARMOR_H_
#define _ARMOR_H_
#include<opencv2/opencv.hpp>
#include"../Light/Light.h"
namespace rm
{
	/**********************
	* װ�װ���
	* ����װ�װ��������Թ̶�,ʹ�þ�������ʵ��
	***********************/
	class Armor
	{
	public:
		Armor() {};
		Armor(const Light& left_light, const Light& right_light);
		Armor(const cv::Point2f* pts, int label);
	public: // ����
		//װ�װ�����
		float height_ratio; // �����߶ȱ�
		float aspect_ratio; // Armor�����
		float center_angle; // ��������������x��ļн�
	public:
		Light left_light, right_light;
		// װ�װ���ɫ
		enum armor_color
		{
			Blue,	// ��ɫ
			Red,	// ��ɫ
			Bad		// ����ɫ����ɫ
		};
		armor_color color;
		// ��ǩ����
		enum label_type
		{
			negative = 0,
			one,
			sentinel,
			three,
			four,
			five
		};
		label_type label = negative;
		// װ�װ��С
		bool armor_small;
		// װ�װ��ĵ�
		// 1 2
		// 0 3
		std::vector<cv::Point2f> middle_four_points;
		//std::vector<cv::Point2f> strip_least_squares_four_points;
	};

	/**********************
	* װ�װ�ɸѡ
	* �Ƿ����װ�װ���״
	***********************/
	bool screen_armor(const Armor& armor, float armor_min_height_ratio, float small_armor_min_aspect_ratio,
		float small_armor_max_aspect_ratio, float big_armor_min_aspect_ratio,
		float big_armor_max_aspect_ratio, float max_center_angle);

	/**********************
	* ��Сװ�װ�ɸѡ
	* �Ƿ����װ�װ���״
	* С: true
	* ��: false
	***********************/
	bool armor_size_discrimine(const Armor& armor,float big_armor_min_aspect_ratio);

	/**********************
	* ����װ�װ�
	***********************/
	cv::Mat draw_armor(cv::Mat src, const Armor& armor, cv::Scalar color =
		cv::Scalar(0, 255, 0), int thickness = 3);

	/**********************
	* ����װ�װ�����
	* ������С������
	***********************/
	cv::Mat draw_armor_label_size(cv::Mat src, const Armor& armor, cv::Scalar color =
		cv::Scalar(0, 255, 0), int thickness = 3);

	/**********************
	* ��������װ�װ�
	* Ĭ�ϰ�ɫ,�����!
	***********************/
	cv::Mat draw_right_armor(cv::Mat src, const Armor& armor, cv::Scalar color =
		cv::Scalar(255, 255, 255), int thickness = 3);
	cv::Mat draw_right_armor(cv::Mat src, const std::vector<cv::Point2f>& middle_four_points, cv::Scalar color =
		cv::Scalar(255, 255, 255), int thickness = 3);
};



#endif // !_ARMOR_H_
