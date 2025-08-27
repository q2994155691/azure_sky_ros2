#ifndef _CARSOLVER_H_
#define _CARSOLVER_H_
#include"CarState/CarState.h"
#include"TranslationState/TranslationState.h"
#include"DataObserver/DataObserver.h"
namespace rm
{
	
	/*
	* �������㹤����
	*/
	class CarSolver
	{
	protected:
		CarStateBase* CarState__;
		TranslationStateBase* TranslationState__;
	public:
		enum Operation // ������
		{
			update = 0,
			init,
			buffer
		};
	public:
		CarSolver() = default;
		CarSolver(CarStateBase* CarState__, TranslationStateBase* TranslationState__);
		virtual ~CarSolver() {};
	public:// debug
		// ���������װ�װ�
		static std::vector<cv::Point3f> fit_four_armors(cv::Point3f car_pos, float car_face_angle,
			float high_radius, float low_radius, float high_low_height_differ, bool high_armor_state);
	public:// debug
		std::vector<cv::Point3f> fit_four_armors(cv::Point3f car_pos, float car_face_angle);
	public:
		// �������
		virtual std::vector<Eigen::VectorXf> solve_car_strategy(Operation operation,
			const std::vector<ArmorPos>& armor_poses, float new_d_t, const float& car_yaw) = 0;
	protected:
		// ��ȡ������		
		virtual cv::Point3f get_car_pos(const ArmorPos& armor_pos) const;
	};

	/*
	* ��װ�װ������
	* ��Ԥ��
	*/
	class NoneSolver : public CarSolver
	{
	public:
		NoneSolver() = default;
		NoneSolver(CarStateBase* CarState__, TranslationStateBase* TranslationState__);
	public:
		std::vector<Eigen::VectorXf> solve_car_strategy(Operation operation,
			const std::vector<ArmorPos>& armor_poses, float new_d_t, const float& car_yaw) override;
	private:
		// �Ը���
		std::vector<Eigen::VectorXf> self_update(float new_d_t);
	};

	/*
	* ��װ�װ������
	* ������ֵ�װ�װ�ʱ��״̬���·���
	* ����������ʱ,ѡ�񲻽����ٶȸ���,�������Ż�Ϊ�����и���
	*/
	class SingleSolver : public CarSolver
	{
		NoneSolver* NoneSolver__;
	public:
		SingleSolver() = default;
		SingleSolver(NoneSolver* NoneSolver__, CarStateBase* CarState__, TranslationStateBase* TranslationState__, bool use_car_middle_pred = false);
	public:
		std::vector<Eigen::VectorXf> solve_car_strategy(Operation operation,
			const std::vector<ArmorPos>& armor_poses, float new_d_t, const float& car_yaw) override;
		void set_record_rotate_speed(float record_rotate_speed);
		// ֱ�Ӹ���,����װ�װ�״̬
		std::vector<Eigen::VectorXf> solve_car_maintain_high_armor_state(Operation operation, 
			ArmorPos armor_pos, float new_d_t, const float& car_yaw);
	private:
		// init
		std::vector<Eigen::VectorXf> init(ArmorPos armor_pos, 
			float new_d_t, const float& car_yaw,const float& rotate_speed = 0);
		std::vector<Eigen::VectorXf> buffer(ArmorPos armor_pos, float new_d_t, const float& car_yaw);

		// ��һ��װ�װ�����⳯�������,������ڸ���װ�װ�״̬,������������
		std::vector<Eigen::VectorXf> detect_update_state_angle_jump(ArmorPos armor_pos, float new_d_t);

	private:
		float record_rotate_speed;
		bool use_car_middle_pred; // ʹ�ó����ĸ��³���״̬
	};

	/*
	* ˫װ�װ������
	* �������˫װ�װ�ʱ��״̬���·���
	* �����ܹ���⵽����װ�װ�,���˸��°뾶�͸߶Ȳ�,�����Ը�����������ǵ���Ϣ���и���
	*/
	class DoubleSolver : public CarSolver
	{
		// ��������������ķ���
		SingleSolver* SingleSolver__;
		NoneSolver* NoneSolver__;
		AngleOptimizer* AngleOptimizer__;
		RadiusOptimizer* RadiusOptimizer__;
	public:
		DoubleSolver() = default;
		DoubleSolver(SingleSolver* SingleSolver__, NoneSolver* NoneSolver__, 
			CarStateBase* CarState__, TranslationStateBase* TranslationState__
			, AngleOptimizer* AngleOptimizer__,int radius_optimizer_queue_length = 10);
		~DoubleSolver();
	public:
		// ������Ӧ����
		std::vector<Eigen::VectorXf> solve_car_strategy(Operation operation,
			const std::vector<ArmorPos>& armor_poses, float new_d_t, const float& car_yaw) override;
	private:
		// ��������ð뾶��߶Ȳ���ظ�װ�װ�
		ArmorPos calculate_car_size(float& high_armor_radius, float& low_armor_radius, float& high_low_height_differ,
			const ArmorPos& left_armor_pos, const ArmorPos& right_armor_pos);
		// ȡ����
		cv::Point2f get_intersection_point(float k1, float k2, cv::Point2f point1, cv::Point2f point2);
	};

}


#endif // !_CARSOLVER_H_
