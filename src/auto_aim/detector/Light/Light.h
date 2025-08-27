#ifndef _LIGHT_H_
#define _LIGHT_H_
#include<opencv2/opencv.hpp>
namespace rm
{
	/******************
	* ������,�̳�RotatedRect��,�ܹ���ȡ��������
	******************/
	class Light : public cv::RotatedRect
	{
	public:
		Light() {};
		explicit Light(const cv::RotatedRect& light);
		bool operator==(const Light& other) const;
		int width, height;
		// �������Ϊ��������
		cv::Point2f top;
		cv::Point2f bottom;
	};

	/******************
	* ��������
	* ͼ��x��������
	******************/
	void sort_lights_x(std::vector<Light>& lights);

	/******************
	* ��������
	******************/
	cv::Mat draw_light(cv::Mat src, const Light& light,cv::Scalar color =
		cv::Scalar(255,0,0), int thickness = 3);


}
#endif // !_LIGHT_H
