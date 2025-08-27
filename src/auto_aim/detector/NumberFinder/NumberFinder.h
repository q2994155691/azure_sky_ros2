#ifndef _NUMBERFINDER_H_
#define _NUMBERFINDER_H_

#include"../Armor/Armor.h"
#include<vector>

/********************************
* װ�װ�����ʶ����
*********************************/
namespace rm
{
	/*************************
	* ����ʶ����������
	* Ĭ��ʹ��20, 28�ߴ�
	*************************/
	class NumNet
	{
	public:
		NumNet() :img_width(20), img_height(28) {};
		// ��ȡ����ʶ������ͼ��roi
		cv::Mat get_num_img_roi(const cv::Mat& pic, const Armor& armor,
			int num_img_roi_light_length = 12);
		// ģ��ǰ������
		bool forward(int& kind, double& forward_confince, cv::Mat src,
			cv::dnn::Net& model);
	private:
		int img_width, img_height;
	};

	class NumberFinder
	{
		rm::NumNet* NumNet__; // ��δ�����ֳߴ����,���Ĺ��캯������
	public:
		NumberFinder() {};
		NumberFinder(cv::dnn::Net model, double min_confidence,int num_img_roi_light_length);
		NumberFinder(std::string model_path, double min_confidence, int num_img_roi_light_length);
		~NumberFinder();
		// ǰ������
		std::vector<rm::Armor> forward(cv::Mat src,std::vector<rm::Armor> armors);
	private:
		// �ų�����������
		bool exclude_impossible_kind(const rm::Armor& armor);
		// ��ʶ�����kindӳ�䵽Armor::label_type
		void kind_to_label_type(rm::Armor& armor, int kind);
		cv::dnn::Net model; // ģ��
		double min_confidence; // ������Ŷ�
	private:
		int num_img_roi_light_length; // ����ͼ��
	};
}


#endif // !_NUMBERFINDER_H_
