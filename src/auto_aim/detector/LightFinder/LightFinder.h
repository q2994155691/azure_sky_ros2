#ifndef _LIGHTFINDER_H_
#define _LIGHTFINDER_H_
#include<iostream>
#include<vector>
#include<opencv2/opencv.hpp>
#include"../Light/Light.h"
namespace rm
{
	/*
	* ������������
	* ͨ���������ͼ����ȡ������Ϣ,��ɸȥ��״�����Ĳ�������
	*/
	class LightFinder
	{
	public:
		LightFinder();
		LightFinder(float max_ratio_w_h, float max_angle, bool SIMPLE);
		virtual std::vector<Light> find_lights(const cv::Mat& src, const cv::Mat& origen_img) = 0; // Ѱ�ҵ�������
		virtual ~LightFinder() {};
	protected: // �������౩¶Ӧ�ýӿ�
		bool screen_light(const Light& light);
		// ��ȡ����
		std::vector<std::vector<cv::Point>> find_counters(const cv::Mat& src);
		// ֱ�ӻ�ȡ��С����
		std::vector<cv::RotatedRect> find_retaterects(const cv::Mat& src);
		// ��ո��������С����
		bool remove_in_advance(const std::vector<cv::Point>& contour, const cv::Vec4i& hierarchy);
	private:
		// ����ɸѡ:���,�����,�Ƕ�
		bool screen_light(float max_ratio_w_h, float max_angle, const Light& light);
		// ��ȡ��б����
		std::vector<cv::RotatedRect> find_retaterects(const cv::Mat& src,bool SIMPLE);
		// ��ȡ����
		std::vector<std::vector<cv::Point>> find_counters(const cv::Mat& src, bool SIMPLE);
	private:
		float max_ratio_w_h; // ����߱�
		float max_angle; // ���Ƕ�
		bool SIMPLE; // �Ƿ��ȡ���������ȡ
	};

	/*
	* ��ǰ��ɸ,��ȡ������ת��Ϊ��������
	*/
	class UsualLightFinder : public LightFinder
	{
	public:
		UsualLightFinder(float max_ratio_w_h, float max_angle, bool SIMPLE);
		std::vector<Light> find_lights_all_enemy(const cv::Mat& src); // ������ɫ,Ѱ�����е�������
		std::vector<Light> find_lights(const cv::Mat& src, const cv::Mat& origen_img) override; // ���ӵ�������

		void set_enemy_color(bool enemy_blue);
	
	private:
		// ��С�����Ż�
		Light strip_least_squares(Light r_rect, cv::Rect b_rect,const std::vector<cv::Point>& counter);

		// ��ɫ����
		bool color_separation(const Light& light,
			const cv::Mat& pic, const std::vector<cv::Point>& contour);
		// ��ɫʶ��
		bool enemy_blue; // �з���ɫΪ��ɫ
	};

	/*
	* ����roi��ȡ�������ĵ���
	* �����ں�ʽ������
	*/
	class MiddleLightFinder : public LightFinder
	{
		UsualLightFinder* UsualLightFinder__; // ��Ϸ�ʽ����UsualLightFinder��find_lights�ӿ�
	public:
		MiddleLightFinder(UsualLightFinder* UsualLightFinder__,float ret_dis_error);
		std::vector<Light> find_lights(const cv::Mat& src, const cv::Mat& origen_img) override; // Ѱ��(����)����
		// Rect������
		cv::Rect rect_edge_detection(cv::Point point, int width, int height,
			int image_width, int image_height);
		bool light_center_in_rect_middle(Light light, cv::Rect rect);
	private:
		// ��ȡ��;������
		Light get_min_dis_light(const cv::Point2f& img_center, const std::vector<Light>& lights);
		// ����λ��������
		bool light_center_in_rect_middle(Light light, cv::Rect rect, float ret_dis_error);
	private:
		// ��������Χ����
		float ret_dis_error;
	};

}

#endif // !LIGHTFINDER_H
