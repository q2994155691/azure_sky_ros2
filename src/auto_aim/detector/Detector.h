#ifndef _DETECTOR_H_
#define _DETECTOR_H_
#include"Light/Light.h"
#include"Armor/Armor.h"
#include"TransDetector.h"
#include"Machine/Machine.h"
#include"LightFinder/LightFinder.h"
#include"ArmorFinder/ArmorFinder.h"
#include"NumberFinder/NumberFinder.h"
#include"YoloModel/YoloModel.h"
namespace rm
{
	/*
	* ģ�巽��
	* ���ܽӿ�:����ͼ��,ʶ��װ�װ�
	* ����װ�װ�ߴ���ֻ�д�С��������,���ڳ���δ�ı�,��Ϊ��̬����
	*/
	class Detector
	{
	public:
		Detector(); 
		Detector(int img_width, int img_height);
		virtual ~Detector() {};
		// ��⺯��
		virtual std::vector<SendArmor> detect(cv::Mat src) = 0;
	protected:
		// ͼ����
		const int img_width, img_height;
	};

	
	/***********************************/
	// ��ͳ�Ӿ�����
	/***********************************/
	class TraditionDetector : public Detector
	{
		Machine* Machine__;
		UsualLightFinder* UsualLightFinder__;
		ArmorFinder* ArmorFinder__;
		NumberFinder* NumberFinder__;
	public:
		TraditionDetector() :Detector() {};
		TraditionDetector(Machine* Machine__, UsualLightFinder* UsualLightFinder__,
			ArmorFinder* ArmorFinder__, NumberFinder* NumberFinder__,
			int img_width, int img_height);
		std::vector<SendArmor> detect(cv::Mat src) override;
	};


	/***********************************/
	// �Ӿ��ںϼ���
	/***********************************/
	class FusionDetector : public Detector
	{
		Machine* Machine__;
		YoloModel* YoloModel__;
		ArmorFinder* ArmorFinder__;
		MiddleLightFinder* MiddleLightFinder__;
	public:
		FusionDetector() :Detector() {};
		FusionDetector(Machine* Machine__, YoloModel* YoloModel__, ArmorFinder* ArmorFinder__, 
			MiddleLightFinder* MiddleLightFinder__, float _width_expand_, float _height_expand_,
			int img_width, int img_height);
		std::vector<SendArmor> detect(cv::Mat src) override;
	private:
		// ��ȡroi
		cv::Rect capture_light_roi(bool get_left_light, const std::vector<cv::Point2f>& middle_four_points, 
			float width_expand, float height_expand, int image_width, int image_height);
		
	private:
		// ����roi��չ��
		float _width_expand_;
		float _height_expand_;
	};
	


}



#endif // !DETECTR_H
