#ifndef _ARMORFINDER_H_
#define _ARMORFINDER_H_
#include"../Armor/Armor.h"
namespace rm
{
	/*
	* װ�װ�����
	* ����ƥ��+����ɸѡ
	* �����д�Сװ�װ�ߴ���Թ̶�,���Ϊ������
	*/
	class ArmorFinder
	{
	public:
		ArmorFinder() {};
		ArmorFinder(float armor_min_height_ratio,float small_armor_min_aspect_ratio, float small_armor_max_aspect_ratio,
			float big_armor_min_aspect_ratio, float big_armor_max_aspect_ratio, float max_center_angle);
		// Ѱ�ҿ���װ�װ�
		std::vector<Armor> find_armors(std::vector<Light> Lights);
	private:
		// ɾ�����е����غ���
		std::vector<Armor> remove_lights_coincide(std::vector<Armor> Armors);
		// ɾ����Խ��
		void remove_pos_noise(std::vector<Armor>& Armors, const std::vector<Light>& Lights);
	private:
		float armor_min_height_ratio; // װ�װ���С�߶ȱ�
		float small_armor_min_aspect_ratio; // Сװ�װ���С�����
		float small_armor_max_aspect_ratio; // Сװ�װ���󳤿��
		float big_armor_min_aspect_ratio; // ��װ�װ���С�����
		float big_armor_max_aspect_ratio;// ��װ�װ���󳤿��
		float max_center_angle;// ������Ľ�

	};
}


#endif // !ARMORFINDER_H
