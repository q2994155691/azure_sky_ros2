#ifndef _VIDEO_H_
#define _VIDEO_H_
#include<opencv2/opencv.hpp>
#include<iostream>
#include<vector>
namespace rm
{
	class Video
	{
	public:
		Video();
		~Video();
		Video(std::vector<std::string>& paths);
		Video(const int video_id);
		// ��ȡͼ��
		cv::Mat ReadPic();
	private:
		// �л�Ŀ��
		std::string next_path();
		// �������
		bool open_video();
		// �ر����
		void close_video();
		// ·��
		const std::vector<std::string> paths;
		cv::VideoCapture* video;
		int id = -1;
	};
};
#endif // !_VIDEO_H_