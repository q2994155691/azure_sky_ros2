#ifndef _MACHINE_H_
#define _MACHINE_H_
#include<opencv2/opencv.hpp>
#include<iostream>
#include<vector>

namespace rm 
{

	/*
	* ͼ������
	*/
	class Machine
	{
	public:
		// ʵ�ֶ�ͼ��Ĵ���
		virtual cv::Mat machine(cv::Mat src) = 0; 

		virtual ~Machine() {};
	protected:
		//��ͨ��ֵ��
		inline cv::Mat threshold(cv::Mat src, double pic_min_threshold);
	};

	/***********
	* ͼ�������ȡ��ֵͼ��
	**************/
	class DifferMachine : public Machine
	{
	public:
		DifferMachine(double pic_min_threshold, bool blue_enemy);
		cv::Mat machine(cv::Mat src) override;
	private:
		double pic_min_threshold; // ��ֵ������
		bool blue_enemy; // �з���ɫ
	};

	/***********
	* �Ҷ�ͼ��ֵ��
	**************/
	class GreyMachine : public Machine
	{
	public:
		GreyMachine(double pic_min_threshold);
		cv::Mat machine(cv::Mat src) override;
	private:
		double pic_min_threshold;  // ��ֵ������
	};

	/***********
	* �Զ���ֵ��
	* ��������ʶ����ȡ
	**************/
	class AutoMachine : public Machine
	{
	public:
		cv::Mat machine(cv::Mat src) override;
	private:
		// �Զ���ֵ��
		inline cv::Mat auto_threshold(cv::Mat src);
	};
}


#endif // !MACHINE_H
