#ifndef _YOLOMODEL_H_
#define _YOLOMODEL_H_
#include"../Light/Light.h"
#include"../Armor/Armor.h"
#include <opencv2/opencv.hpp>
#include<openvino/openvino.hpp>
namespace rm
{

	class YoloModel
	{
	protected:
		// 0  3
		// 1  2
		// ����,����,����,����
		struct alignas(4) bbox_t {
			cv::Point2f pts[4];
			float confidence;
			int label;// 
		};
	public:
		YoloModel() {};
		YoloModel(std::string model_path, int image_size);
		void set_enemy_color(bool enemy_blue);
		virtual ~YoloModel() {};
	public:
		// Ѱ��װ�װ�
		virtual std::vector<Armor> find_armors(cv::Mat src);

	protected:
		// �������౩¶bbox_t,���û�͸��
		std::vector<bbox_t> forward(cv::Mat src);
		// Ŀ�곬����
		std::vector<bbox_t> screen_out_edge_targets(const std::vector<bbox_t>& bbox_ts,
			double image_width, double image_height);
		// ����Ӧ�ߴ�
		cv::Mat letterbox(cv::Mat& src, int w, int h, int& padd_w_, int& padd_h_);
		cv::Mat letterbox(cv::Mat& src, int w, int h);
		// ȡ��ֵ��ǩ
		int argmax(const float* ptr, int len);
		// sigmoid����
		float sigmoid(float x);
		// ��Сֵ
		float min_4(const float pts1[4]);
		// ���ֵ
		float max_4(const float pts1[4]);
		// �Ƿ񳬳��غ�����
		bool is_overlap(const float pts1[4], const float pts2[4]);
	private:
		// ��ǩ����,�����ɫ����
		bool strip_filter(int label,int enemy_blue);
	private:
		int image_size; // ���÷����ߴ紦���ͼ���С����
		// ��չ��ͼƬ���
		int padd_w_ = 0;
		int padd_h_ = 0;
		bool enemy_blue; // �з���ɫ
	private:
		// openvino������
		ov::Core core;
		ov::CompiledModel model;
		ov::InferRequest iq;
		ov::Tensor input_tensor_;
	};

};
#endif // !YOLOMODEL_H

