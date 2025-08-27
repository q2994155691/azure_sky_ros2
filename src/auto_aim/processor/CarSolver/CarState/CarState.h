#ifndef _CATSTATE_H_
#define _CATSTATE_H_
#include"../../ArmorPos/ArmorPos.h"
#include"../Ekf/Ekf.h"
namespace rm
{
	class CarStateBase
	{
	public:
		CarStateBase();
		virtual ~CarStateBase() {};
	public: // �����۲�ӿ�
		virtual Eigen::VectorXf get_last_state() const = 0;
		virtual Eigen::VectorXf update(Eigen::VectorXf measurement, double new_d_t) = 0;
		virtual Eigen::VectorXf reset(Eigen::VectorXf state) = 0;
		virtual Eigen::VectorXf reset_maintain_speed(Eigen::VectorXf measurement, double new_d_t) = 0;
		//// ֱ������Ŀ��״̬
		//virtual void set_target_state(Eigen::VectorXf target_state);
	public: // �ṩ��״̬���ֵĽӿ�
		// ����������ж�
		bool angle_jump(float angle) const;
		// ������һ֡�����
		void set_last_yaw(float angle);
		// ����һ֡�����
		float get_last_yaw() const;
		// ��ȡ���ĵ�ǰ�۲�Ƕ�Ӧ�İ뾶
		float get_observe_armor_radius() const;
		// ��ȡ���ĵ�ǰ�۲�Ƕ�Ӧ�ĸ߶Ȳ�
		float get_high_low_height_differ() const;
		// ��ȡ�ߵ���뾶
		void get_high_low_radius(float& high_radius, float& low_radius) const;
		// ���ð뾶�͸߶Ȳ�
		void set_radius(float high_armor_radius, float low_armor_radius);
		void set_high_low_height_differ(float high_low_height_differ);
	public: // �Ըߵ�״̬���в���
		void set_high_armor_state(bool high_armor_state); // ����״̬
		void inversion_high_armor_state(); // ״̬ȡ��
		bool get_high_armor_state() const; // ��ȡ��ǰ״̬
	protected: // �˲���
		Eigen::VectorXf target_state; // Ŀ��״̬
		float d_t = 0.01;
		bool HIGH_ARMOR_STATE; // �Ƿ��ڹ۲��װ�װ�״̬
		float high_armor_radius; // ��װ�װ��Ӧ�뾶
		float low_armor_radius; // ��װ�װ��Ӧ�뾶
		float high_low_height_differ; // ��װ�װ����װ�װ�ĸ߶Ȳ�,���ھ�������ϵY��������,��Ϊ����
	protected: // record
		double last_yaw; // ��һ֡�����,Ҳ�ǹ۲�װ�װ��Ӧ�ĳ����
	};

	/*
	* �����ĸ�����
	* ״̬��ģ��,���ݵ�ǰװ�װ�ߵ��жϵ�ǰ״̬,���Ż�ģ��
	* ������ʱ,ԭ����ʹ�øߴ�װ�װ��λ�ý��и���
	* ����ƽ������,��������������չ
	*/
	class MIddleCarState : public CarStateBase
	{
	public:
		MIddleCarState() = default;
		MIddleCarState(const std::vector<double>& q_vs, const std::vector<double>& r_vs);
	public: // �ṩ�����۲�Ľӿ�
		// ��ȡ����״̬
		Eigen::VectorXf get_last_state() const override;
		// ״̬���� �۲���ýǶ�ֵ,�˲������û���ֵ
		Eigen::VectorXf update(Eigen::VectorXf measurement, double new_d_t) override;
		// ״̬����
		Eigen::VectorXf reset(Eigen::VectorXf state) override;
		// �����ٶȲ�����л�λ��
		Eigen::VectorXf reset_maintain_speed(Eigen::VectorXf measurement, double new_d_t) override;
	private: // �˲���
		std::unique_ptr<ExtendedKalmanFilter> tracker__; // �������˲���
	};

	/*
	* ekf�۲���
	* ����ֵΪװ�װ�λ��
	*/
	class EkfCarState : public CarStateBase
	{
	public:
		EkfCarState() = default;
		EkfCarState(const std::vector<double>& q_vs, const std::vector<double>& r_vs);
	public: // �ṩ�����۲�Ľӿ�
		// ��ȡ����״̬
		Eigen::VectorXf get_last_state() const override;
		// ״̬���� �۲���ýǶ�ֵ,�˲������û���ֵ
		Eigen::VectorXf update(Eigen::VectorXf measurement, double new_d_t) override;
		// ״̬����
		Eigen::VectorXf reset(Eigen::VectorXf state) override;
		// �����ٶȲ�����л�λ��
		Eigen::VectorXf reset_maintain_speed(Eigen::VectorXf measurement, double new_d_t) override;
	private: // �˲���
		std::unique_ptr<ExtendedKalmanFilter> tracker__; // �������˲���
	};

}

#endif // !_CATSTATE_H_
