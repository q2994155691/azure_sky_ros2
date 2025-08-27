#ifndef _RANGESETTER_H_
#define _RANGESETTER_H_
#include<opencv2/opencv.hpp>
namespace rm
{
	/*
	* ��Χ�滮��
	* �滮�����Χ
	* ͨѶֵ����
	*/
	class RangeSetter
	{
	public:
		RangeSetter() = default;
		RangeSetter(float max_shoot_x, float max_shoot_y, float max_shoot_middle_x, float max_send_yaw, float max_send_pitch,
			float max_send_yaw_speed, float trans_control_compensation_left, float trans_control_compensation_right,
			float rotate_control_compensation_left, float rotate_control_compensation_right);
	public:
		void set_armor_size_small(bool armor_size_small);
		bool get_armor_size_small() const;
		// �ж�yaw���Ƿ��������
		bool if_yaw_shoot_hit(cv::Point3f target_point);
		bool if_yaw_shoot_hit(cv::Point3f target_point,float face_angle);
		// ���Ļ����ж�yaw���Ƿ��������
		bool if_middle_yaw_shoot_hit(cv::Point3f target_point);
		bool if_middle_yaw_shoot_hit(cv::Point3f target_point, float face_angle);
		// �ж�pitch���Ƿ��������
		bool if_pitch_shoot_hit(cv::Point3f target_point);
		// �޷�
		void send_data_range(float& send_pitch, float& send_yaw, float& send_yaw_speed);
		// �Ƕ�����
		float yaw_angle_increase(float send_yaw, float yaw_trans_speed, float yaw_rotate_speed, bool translation_right);
		// ��ȡ��ǰmax_shoot_x
		float get_max_shoot_x() const;
	private:
		bool armor_size_small; // ��ǰ����Ŀ���װ�װ��С
		float max_shoot_x, max_shoot_y; // ���������x,y
		float max_shoot_middle_x; // ��С���Ļ���x 
		float max_send_pitch, max_send_yaw, max_send_yaw_speed; // ����ֵ�����,��Сֵ,�����û�����Ϊ�Ƕ�ֵ
		// ������̨����ת�����ܲ�ͬ,���ò�ͬ����������
		float trans_control_compensation_left, trans_control_compensation_right; // ƽ������
		float rotate_control_compensation_left, rotate_control_compensation_right; // ��ת����
	};
};
#endif // !_RANGESETTER_H_
