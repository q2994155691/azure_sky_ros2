#ifndef _ARMORSOLVER_H_
#define _ARMORSOLVER_H_
#include"../ArmorPos/ArmorPos.h"
#include"../Coordinate/Coordinate.h"
#include"FaceAngleSolver/FaceAngleSolver.h"
namespace rm
{
	/*
	* װ�װ������
	* ��Detector�㴫��������תΪ��������ϵ����Ϣ
	* ֻ������,������ɸѡ
	* 
	* ���������:Զ���볯��ǿ���ȡ��,����ת�ٷ����жϵ�ǰת���������ϵ�³����Ӧ�ø��ݽǶȱ仯
	* ����������������ͬʱ��֤�Ƕ������λ������
	*/
	class ArmorSolver
	{
		Coordinate* Coordinate__;
		FaceAngleSolver* FaceAngleSolver__;
	public:
		ArmorSolver() {};
		ArmorSolver(Coordinate* Coordinate__, FaceAngleSolver* FaceAngleSolver__);
		// �������װ�װ�λ����Ϣ
		bool solve_armor_pnp(const float& car_yaw, const float& car_pitch, ArmorPos& armorpos);
		// ���㳯����Ϣ
		void solve_armor_face(ArmorPos& armorpos, const float& car_yaw, const float& car_pitch);
		// ֱ�ӽ���ȫ��װ�װ�λ��
		bool solve_armor_pos(const float& car_yaw, const float& car_pitch, ArmorPos& armorpos);
	public: // ����debug
		cv::Mat draw_face_angle(cv::Mat src,const ArmorPos& armor_pos, const float& car_yaw, cv::Scalar color);
	};
}


#endif // !_ARMORSOLVER_H_
