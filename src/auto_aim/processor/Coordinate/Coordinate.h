#ifndef _COORDINATE_H_
#define _COORDINATE_H_
#include"../ArmorPos/ArmorPos.h"

// ����ת�����
namespace rm 
{
	/******************
	* ��Сװ�װ�ߴ����
	******************/
	static const float small_armor_length = 13.5;
	static const float small_armor_width = 5.5;
	static const float big_armor_length = 22.5;
	static const float big_armor_width = 5.5;
	static const float armor_pitch = -15.0 / 180 * CV_PI;

	static const std::vector<cv::Point3f> small_armor_world_points
		= { 
		cv::Point3f(0, -small_armor_length / 2, small_armor_width / 2),
		cv::Point3f(0, -small_armor_length / 2, -small_armor_width / 2),
		cv::Point3f(0, small_armor_length / 2, -small_armor_width / 2),
		cv::Point3f(0, small_armor_length / 2, small_armor_width / 2),
	};
	static const std::vector<cv::Point3f> big_armor_world_points
		= {
		cv::Point3f(0, -big_armor_length / 2, big_armor_width / 2),
		cv::Point3f(0, -big_armor_length / 2, -big_armor_width / 2),
		cv::Point3f(0, big_armor_length / 2, -big_armor_width / 2),
		cv::Point3f(0, big_armor_length / 2, big_armor_width / 2),
	};
	


	/*
	* ����ϵ��
	* ��������ϵת��
	*/
	class Coordinate
	{
	public:
		Coordinate() = default;
		Coordinate(cv::Mat intrinsic, cv::Mat distcoeffs,
			const float& shaft_differ_x, const float& shaft_differ_y, 
			const float& shaft_differ_z, bool SOLVEPNP_IPPE,
			const float& sot_shaft_differ_x,
			const float& sot_shaft_differ_y,
			const float& sot_shaft_differ_z,
			const float& sot_shifting_yaw,
			const float& sot_shifting_pitch,
			const float& wheel_to_center_distance);
		// ת��ΪArmorPos,�����Զ�����Ϣ,����ת����Ը�Ч
		bool trans_aromr_pos(const float& car_yaw, const float& car_pitch, ArmorPos& armorpos);
	public:
		// Ϊ�ⲿ�ṩ��Ҫ�Ľӿ�
		cv::Point2f abs2pixel(cv::Point3f position, const float& car_yaw, const float& car_pitch);

		// ��������ϵת�������ϵ
		cv::Point3f abs2cam(cv::Point3f position, const float& car_yaw, const float& car_pitch);

		// �������ϵת��������ϵ
		cv::Point3f cam2abs(cv::Point3f position, const float& car_yaw, const float& car_pitch);

		// ��ת��
		cv::Point3f rotate_angle(const cv::Point3f& position,const float& rotate_yaw, const float& rotate_pitch);

		// ����ϵ�任
		cv::Point3f coordinate_transformation(const cv::Point3f& position, const float& car_yaw, const float& car_pitch,
			const float& shaft_differ_x, const float& shaft_differ_y, const float& shaft_differ_z);

		// ��������ϵ�任
		cv::Point3f reverse_coordinate_transformation(const cv::Point3f& position, const float& car_yaw, const float& car_pitch,
			const float& shaft_differ_x, const float& shaft_differ_y, const float& shaft_differ_z);

		// ��ȡŷ����
		// ��λΪ����
		void pos2angles(float& yaw, float& pitch, const cv::Point3f& position);

	public:
		// ��������ϵת���������ϵ
		cv::Point3f abs2sot(const cv::Point3f& abs_pos, const float& car_yaw, const float& car_pitch , float yaw_speed = 0);

		// �������ϵת����������ϵ
		cv::Point3f sot2abs(const cv::Point3f& sot_pos, const float& car_yaw, const float& car_pitch, float yaw_speed = 0);

	private:

		// ��������ϵת�������ϵ
		cv::Point3f abs2cam(cv::Point3f position, const float& car_yaw, const float& car_pitch,
			const float& shaft_differ_x, const float& shaft_differ_y, const float& shaft_differ_z);

		// PnP����
		bool pnp(cv::Mat& Rvec, cv::Mat& Tvec, cv::Mat intrinsic, cv::Mat distcoeffs,
			const std::vector<cv::Point2f>& four_pixel_points
			, bool armor_small_size, bool SOLVEPNP_IPPE);

		// �������
		cv::Mat get_rot_mat_x(float x);
		cv::Mat get_rot_mat_y(float y);
		cv::Mat get_rot_mat_z(float z);
		cv::Mat get_rot_mat_xyz(float x, float y, float z);
		cv::Mat get_tans_mat(float x, float y, float z);

		// �������ϵת��������ϵ
		cv::Point3f cam2abs(cv::Point3f position, const float& car_yaw, const float& car_pitch,
			const float& shaft_differ_x, const float& shaft_differ_y, const float& shaft_differ_z);

		// �������ϵת��������ϵ
		cv::Point2f cam2pixel(cv::Point3f position, cv::Mat intrinsic, cv::Mat distcoeffs);

		// �������ϵת��������ϵ
		cv::Point2f abs2pixel(cv::Point3f position, const float& car_yaw, const float& car_pitch,
			const float& shaft_differ_x, const float& shaft_differ_y, const float& shaft_differ_z,
			cv::Mat intrinsic, cv::Mat distcoeffs);

	private:
		float shaft_differ_x, shaft_differ_y, shaft_differ_z; // ���ĵ�ƫ����
		cv::Mat intrinsic; // ����ڲ�
		cv::Mat distcoeffs; // ������
		bool SOLVEPNP_IPPE = true; // �Ƿ�����ĵ㹲�����
	private: // �������ϵת������
		float sot_shaft_differ_x;
		float sot_shaft_differ_y;
		float sot_shaft_differ_z;
		float sot_shifting_yaw;
		float sot_shifting_pitch;
		float wheel_to_center_distance; // Ħ���ֵ����ľ���
	};
}
#endif // !COORDINATE_H

