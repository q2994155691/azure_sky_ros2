#ifndef _TRANSCONTROLER_H_
#define _TRANSCONTROLER_H_

namespace rm
{
	class TransControler
	{
	public:
		TransControler() 
			:pitch(0), yaw(0), yaw_speed(0), shoot_time(-1), move_state(1), ifget(0)
		{
		};
		TransControler(float shoot_time)
			:pitch(0), yaw(0), yaw_speed(0), shoot_time(shoot_time), move_state(1), ifget(0)
		{
		};
		double pitch;
		double yaw;
		double yaw_speed;
		float shoot_time;	// ͨѶת��Ϊcanshoot
		int move_state;		// �л�װ�װ�ʱȡ2,�������ȡ1
		int ifget;			// һ������Ҫ�ܵ��������, ifget = 1
		float rpm = 0;			// rpmת��
		int enemy_kind = 0;		// �з�����
		int enemy_x = 0;		
		int enemy_y = 0;
	};
};


#endif // !_TRANSCONTROLER_H_
