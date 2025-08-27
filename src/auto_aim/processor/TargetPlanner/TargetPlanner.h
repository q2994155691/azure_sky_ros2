#ifndef _TARGETPLANNER_H_
#define _TARGETPLANNER_H_
#include"../ArmorPos/ArmorPos.h"

namespace rm
{
	/*
	* ����Ŀ��滮��
	* ����ÿ��Ŀ��,����ӵ��װ�װ��λ����Ϣ,����ʹ�õ��������㳯����бȽϴ��ʱ�����,����֪װ�װ����,ͼ��λ���Լ���ά����
	* ����涨�˵�ǰ�ļȶ�����Ŀ��
	* 3V3��,������3��װ�װ�,δ������չΪ����
	*/
	class TargetPlanner
	{
	public:
		TargetPlanner() {};
		virtual ~TargetPlanner() {};
	protected: // ����������޸�
		//  �ڱ���Ŀ��.����SendArmor��ӳ���ϵ��ͬ
		//	negative = 0,
		//	one,
		//	sentinel,
		//	three
		int target_kind = 0;
	public:
		// ��ȡĿ������
		int get_target_kind() const;
		// Ŀ��滮,���ض�Ӧ��ͬ�����
		virtual std::vector<ArmorPos> plan(const std::vector<ArmorPos>& armor_poses) = 0;
	protected:
		// ����װ�װ�Ŀ���ȡ��ǰ����װ�װ�
		std::vector<ArmorPos> get_target_kind_armor_poses(const std::vector<ArmorPos>& armor_poses);
		// �������ͷ�����벻ͬ������
		std::vector<std::vector<ArmorPos>> screen_armors(const std::vector<ArmorPos>& armor_poses);
	};

	/*
	* ����滮��
	* ������ʶ�𵽵Ľ�����Ŀ����д��
	* ����������ǰĿ��,����ٻ���֡,����clear,���ڼ��ص�
	*/
	class DefaultPlanner : public TargetPlanner
	{
	public:
		DefaultPlanner() = default;
		DefaultPlanner(int buffer_size);
	public:
		std::vector<ArmorPos> plan(const std::vector<ArmorPos>& armor_poses) override;
	private:
		void clear();
		// ����
		int buffer;
		// ����ߴ�
		const int buffer_size;
	};

	/*
	* �������ͻ����Planner
	* ͬһ�����ͱ������n�βŻ������һ��ľ����ж�
	*/
	class BufferPlanner : public TargetPlanner
	{
	public:
		BufferPlanner() = default;
		BufferPlanner(int buffer_size,int _kind_buffer_size_ = 3);
	public:
		std::vector<ArmorPos> plan(const std::vector<ArmorPos>& armor_poses) override;
	private:
		// ���¼�¼����
		std::vector<ArmorPos> update_kind_buffer(const std::vector<ArmorPos>& armor_poses);

		void clear();
		// ����
		int buffer;
		// ����ߴ�
		const int buffer_size;
		// 
		int record_vector[3];
		// 
		const int _kind_buffer_size_;
	};
};

#endif // !_TARGETPLANNER_H_
