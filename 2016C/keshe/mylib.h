
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义结构体
typedef struct
{
	int hour;//小时
	int day;//天
	int moon;//月
} Date;

typedef struct
{
	char name[10];//客户姓名
	int room_num;//房间号
	int room_kind;//房间种类
	int yajin;//押金
	Date time;//入住时间
	int method;//计费方式
	char room_zhuantai[100];//房间状态
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

