#ifndef _IMAGESHOWER_H_
#define _IMAGESHOWER_H_
#include<opencv2/opencv.hpp>
#include<mutex>
namespace rm
{
	/************************
	* ͼ���ӳ��
	* ���߳�����
	************************/
	class ImageShower {
	public:
		ImageShower();
		~ImageShower();
	public:
		// ���߳�
		void run();

		// �ر��߳�
		void close();

		// ����ͼ��
		void set_image(cv::Mat src);
		
	private:
		cv::Mat last_image;
		bool close_image_show;
		std::mutex lock_image;
	};
};
#endif // !_IMAGESHOWER_H_
