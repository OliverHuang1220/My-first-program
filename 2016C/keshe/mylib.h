
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����ṹ��
typedef struct
{
	int hour;//Сʱ
	int day;//��
	int moon;//��
} Date;

typedef struct
{
	char name[10];//�ͻ�����
	int room_num;//�����
	int room_kind;//��������
	int yajin;//Ѻ��
	Date time;//��סʱ��
	int method;//�Ʒѷ�ʽ
	char room_zhuantai[100];//����״̬
}Customer;

int dengji();
int biaohzhun_day_prize();
int biaozhun_hour_prize();
int zhongdian_day_prize();
int zhongdian_hour_prize();
int inqury_room();
void inqury_prize();
int p_inf(int a);
int tuifang();
int find(Customer q[100], int num);
int namefind(Customer h[100],char xingming[10]);
void change();
void shanchu();

