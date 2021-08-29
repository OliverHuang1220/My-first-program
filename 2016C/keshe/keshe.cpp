// keshe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mylib.h"





int main()
{
	 FILE *fp;//定义文件
	 if((fp=fopen("d:\\H.dat","wb"))==NULL)
	{
     printf("Can not open file!\n");
	 return(-1);
		 
	}
     fclose(fp);
	 
	
	//主菜单
	int xuanze,a=1;
	while(a)
	{
		printf("\n\n\t\t******************************欢迎光临本酒店***************************\t\t\t\t\n\n\n");
		printf("\t\t\t\t****************1.登记入住****************\t\t\t\t\n");
		printf("\t\t\t\t****************2.房间查询****************\t\t\t\t\n");
		printf("\t\t\t\t****************3.费用查询****************\t\t\t\t\n");
		printf("\t\t\t\t****************4.结账退房****************\t\t\t\t\n");
        printf("\t\t\t\t****************5.修改信息****************\t\t\t\t\n");
		printf("\t\t\t\t****************5.删除信息****************\t\t\t\t\n");
		printf("房间价格:\n\n");
		printf("标准间:$100/h   $500/d\n");
		printf("钟点间:$300/h   $800/d\n");
		printf("请选择所需要的服务\n");
		scanf("%d",&xuanze);
		
		//对服务选择则
		switch(xuanze)
		{ 
		case 1:printf("************************************已进入登记入住服务*********************************\n");
			dengji();
			break;
			
		case 2:printf("************************************已进入房间查询服务******************************\n");
			inqury_room();
			break;
			
		case 3:printf("************************************已进入费用查询服务*****************************\n");
			inqury_prize();
			break;
			
		case 4:printf("************************************已进入结账退房服务*************************\n");
			tuifang();
			break;

		case 5:printf("************************************已进入修改信息服务*************************\n");
			change();
			break;

		case 6:printf("************************************已进入删除信息服务*************************\n");
            shanchu();
			break;

		default:printf("************************************Input Error********************************\n");
		}
		
		
	}
	
	return 0;
}
