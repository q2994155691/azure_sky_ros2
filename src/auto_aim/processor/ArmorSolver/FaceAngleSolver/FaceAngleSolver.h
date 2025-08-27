#ifndef _FACEANGLESOLVER_H_
#define _FACEANGLESOLVER_H_
#include"../../Coordinate/Coordinate.h"
#include"../../ArmorPos/ArmorPos.h"
#include<iostream>
#include<vector>


namespace rm {

	/*
	* ����ǽ������
	*/
	class FaceAngleSolver
	{
	protected:
		Coordinate* Coordinate__;
	public:
		FaceAngleSolver() {};
		FaceAngleSolver(Coordinate* Coordinate__);
		~FaceAngleSolver() {};
		// �������������ϵ�µĳ����λ��
		virtual float absolute_angle_solve(const ArmorPos& armor_pos, const float& car_yaw, const float& car_pitch) = 0;
		// ���Գ��������Գ�����໥ת��
		static float switch_absolute_camera_angle(float angle, const float& car_yaw);
		// ����ת�Ƕ�
		static float conversion_arc_to_angle(float angle);
		// ����װ�װ�ĽǶ�,��ȡװ�װ��ĵ�
		std::vector<cv::Point3f> get_armor_intersection(const ArmorPos& armor_pos, float absolute_angle, bool armor_small_size, float armor_pitch);
		// װ�װ���ת
		std::vector<cv::Point3f> rotate_armor(cv::Point3f armor_center, float yaw_angle,
			bool armor_small_size, float armor_pitch = rm::armor_pitch);
		// ���õз���ɫ
		void set_enemy_color(bool enemy_blue);
	protected:
		bool enemy_blue;
		// ����yaw����תװ�װ�
		std::vector<cv::Point3f> rotate_armor_yaw(cv::Point3f armor_center, float yaw_angle,
			bool armor_small_size);
		// ����pitch����תװ�װ�
		std::vector<cv::Point3f> rotate_pitch(const std::vector<cv::Point3f>& points,
			cv::Point3f pt1, cv::Point3f pt2, float pitch_angle);
		// �Ƶ���ת
		cv::Point3f rotate_point(const cv::Point3f& point, const cv::Mat& rot_y, const cv::Point3f& center);
	};

	/*
	* �������㷢�����ĳ�����㷨
	* ����Ͻ���23�꿪Դ
	*/
	class IterationAngleSolver : public FaceAngleSolver
	{
	public:
		IterationAngleSolver(int orientationangle_iteration, Coordinate* Coordinate__,float increase_param_blue, float increase_param_red);
		float absolute_angle_solve(const ArmorPos& armor_pos, const float& car_yaw, const float& car_pitch) override;

	private:
		// ���ƶȺ���
		virtual float cost(const std::vector<cv::Point2f>& armor_four_pixel_points,
			const std::vector<cv::Point2f>& points2f) = 0;
		float balance_cost(const std::vector<cv::Point2f>& armor_four_pixel_points,
			const std::vector<cv::Point2f>& points2f);
		// ����
		float increase_angle(float face_angle,float car_yaw,float increase_param); 
		// ���������
		float correct_face_angle(float face_angle,float face_angle_compute, float car_yaw);
	private:
		int orientationangle_iteration; // ������
		float increase_param_blue; // �������������(�Ƕ�)�����(cm)��ֵ�Ĳ���,���ڻ�ȡ
		float increase_param_red;
		
	};


	/*
	* ���ڽǶȺ�λ�Ʋ�������ƶ�
	* �ο��Ͻ�����
	*/
	class DiagonalAngleSolver : public IterationAngleSolver
	{
	public:
		DiagonalAngleSolver(float inclined,float pixel_error,
		int orientationangle_iteration, Coordinate* Coordinate__, float increase_param_blue, float increase_param_red);

	private:
		float cost(const std::vector<cv::Point2f>& armor_four_pixel_points,
			const std::vector<cv::Point2f>& points2f) override;
	private:
		// ���Ȩ�ز���
		float inclined;
		float pixel_error;
	};

};
#endif // !_FACEANGLESOLVER_H_
