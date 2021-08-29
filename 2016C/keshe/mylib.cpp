#include "stdafx.h"
#include "mylib.h"

FILE *fp;
int k;
Customer p[100];


/*******************************************************************/
/*                      1.标准间按小时计费函数                             */
/*******************************************************************/
int biaozhun_hour_prize(Date endtime,Date starttime)
{

	int prize,hour,day;
    hour=endtime.hour-starttime.hour;
    day=endtime.day-starttime.day;
    if(hour<0)//若小时小于零，天数减去一天
	{
	    hour=hour+24;
		day=day-1;
		prize=(hour+day*24)*100;
	
	}
	else
	{
		 prize=(hour+day*24)*100;
	}
	return prize;
}


/*******************************************************************/
/*                      2.钟点间按小时收费/                        */
/*******************************************************************/
int zhongdian_hour_prize(Date endtime,Date starttime)
	{
	
		int prize,hour,day;
		hour=endtime.hour-starttime.hour;
		day=endtime.day-starttime.day;
		if(hour<0)//若小时小于零，天数减去一天
		{
			hour=hour+24;
			day=day-1;
			prize=(hour+day*24)*300;
		
		}
		else
		{
			prize=(hour+day*24)*300;
		}
			return prize;
	}

/*******************************************************************/
/*                     3.标准间按天数计费函数                        */
/*******************************************************************/
int biaozhun_day_prize(Date endtime,Date starttime)
	{

		 int prize,hour,day;
		 hour=endtime.hour-starttime.hour;
		 day=endtime.day-starttime.day;
			if(hour>0)  //若小时大于0零，天数加一
				{
	 
						day=day+1;
						prize=day*500;
	
				}
			else
				{
						prize=day*500;
				}
return prize; 
}


/*******************************************************************/
/*                     4.钟点间按天收费函数                       */
/*******************************************************************/
int zhongdian_day_prize(Date endtime,Date starttime)
{
	
	int prize,hour,day;
	hour=endtime.hour-starttime.hour;
	day=endtime.day-starttime.day;
	if(hour>0)  //若小时大于0零，天数加一
		{
		
			day=day+1;
			prize=day*800;
		
		}
	else
		{
			prize=day*800;
		}
			return prize; 
}



/*******************************************************************/
/*                     5.登记函数                                  */
/*******************************************************************/
int dengji()
{     int z=1,x=1; 
    
	  for (k=0;z==1;k++)
		{
			printf("输入姓名\n");   //登记姓名
			scanf("%s",&p[k].name);
		
		
			printf("请选择房间种类\n");  //登记房间种类
			printf("1.标准间\n");
			printf("2.钟点间\n");
			scanf("%d",&p[k].room_kind);
		    if(p[k].room_kind==1|| p[k].room_kind==2)
			{
					int i=1,j=51;
					if(p[k].room_kind==1) 
						{
							printf("标准间房号:\n");//显示标准间房间号
							while(i<=50)
								{
									printf("%d\t",i++);
									if(i%10==1)printf("\n");
				
								}
						}
					else
						{
									printf("钟点间房号:\n");  //显示钟点间房间号
									while(j<=100)
									{
										printf("%d\t",j++);
										if(j%10==1)printf("\n");
				
						}
			
				}

			}
			else
				{
									printf("输入有误，请重新输入!");
									scanf("%d",&p[k].room_kind);
									int i=1,j=51;
									if(p[k].room_kind==1) 
				{
									printf("标准间房号:\n");//显示标准间房间号
									while(i<=50)
										{
											printf("%d\t",i++);
											if(i%10==1)printf("\n");
										}
				}
			else
				{
									printf("钟点间房号:\n");  //显示钟点间房间号
									while(j<=100)
										{
											printf("%d\t",j++);
											if(j%10==1)printf("\n");
				
										}
			
				}
			}
		
		
	
		printf("请输入房间号\n");  //登记房间号
		scanf("%d",&p[k].room_num);
		
		
		printf("请选择计费方式(输入1或2)\n");
		printf("1.按小时计费\n");
		printf("2.按天数计费\n");
		scanf("%d",&p[k].method);
		if(p[k].method=!1 && p[k].method!=2)//登记计费方式
		{
			printf("输入有误,请重新选择!");
			scanf("%d",&p[k].method);
		}
		printf("请输入入住时间(格式:x月x日x时)\n");  //登记入住时间
		scanf("%d%d%d",&p[k].time.moon,&p[k].time.day,&p[k].time.hour);
		printf("入住的时间为%d月%d日%d时\n",p[k].time.moon,p[k].time.day,p[k].time.hour);
		printf("应交押金为$500\n");//登记押金
		scanf("%d",&p[k].yajin);
		printf("实际支付押金%d\n",p[k].yajin);

		fp=fopen("d:\\H.dat","ab");//以追加方式打开文件
        fwrite(&p, sizeof( Customer),100,fp);//将结构体写入fp文件中
		fclose(fp);

		printf("是否继续登记(1是/2否)\n");
		scanf("%d",&z); 
	}

	 
      
        return 0;

}



/*******************************************************************/
/*                     6.个人信息显示函数                          */
/*******************************************************************/
int p_inf( Customer y[100],int a)
{
	
	char c[100],b[100];
	switch(y[a].room_kind)
		{
		
		
			case 1:strcpy(c,"标准间");
			break;
		
			case 2:strcpy(c,"钟点间");
			break;
	
			default:printf("Error\n");
		
		}
	
	
	if (y[a].method==1)
		{
			strcpy(b,"按小时计费");
		} 
	else
		{
			strcpy(b,"按天数计费");
		}
	
	printf("姓名:%s\n",y[a].name);
	
	printf("房间号:%d\n",y[a].room_num);
	
	printf("房间种类:%s\n",c);
	
	printf("计费方式:%s\n",b);
	
	printf("入住时间:\n\n");
	
	printf("%d月",y[a].time.moon);
	
	printf("%d日",y[a].time.day);
	
    printf("%d时\n",y[a].time.hour);
	
	printf("押金:%d\n",y[a].yajin);
	
	return 0;
	
	
	
}


/*******************************************************************/
/*                     7.当前费用查询函数                          */
/*******************************************************************/
void inqury_prize()
{
	Date endtime;
	  fp=fopen("d:\\H.dat","rb");
    for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
	fclose(fp);	

	int a;
	int pr;
	printf("请输入查询的房间号:\n");
	scanf("%d",&a);
	a=find(p,a);
	if(a!=-1)
	{
	       if(p[a].room_kind==1)
		   {
                if(p[a].method==1)
				{
		         	printf("请输入当前日期:\n");
		        	scanf("%d%d%d",&endtime.moon,&endtime.day,&endtime.hour);
					printf("输入的日期为%d月%d日%d时(格式:x月x日x时)\n",endtime.moon,endtime.day,endtime.hour);
			        pr=biaozhun_hour_prize(endtime,p[a].time);
				    printf("目前按小时消费金额为%d",pr);
				}
		         else
				 {
		         	printf("请输入当前日期(格式:x月x日x时):\n");
		         	scanf("%d%d%d",&endtime.moon,&endtime.day,&endtime.hour);
					printf("输入的日期为%d月%d日%d时\n",endtime.moon,endtime.day,endtime.hour);
		        	pr=biaozhun_day_prize(endtime,p[a].time);
				    printf("目前按天数消费金额为%d",pr);
				 }
		   }
	     else
		 {
	        	if(p[a].method==1)
				{
			       printf("请输入当前日期(格式:x月x日x时):\n");
		           scanf("%d%d%d",&endtime.moon,&endtime.day,&endtime.hour);
				   printf("输入的日期为%d月%d日%d时\n",endtime.moon,endtime.day,endtime.hour);
			       pr=zhongdian_hour_prize(endtime,p[a].time);
				   printf("目前按小时消费金额为%d",pr);
				}
		        else 
				{
			       printf("请输入当前日期(格式:x月x日x时):\n");
			       scanf("%d%d%d",&endtime.moon,&endtime.day,&endtime.hour);
				   printf("输入的日期为%d日%d月%d时\n",endtime.moon,endtime.day,endtime.hour);
			       pr=zhongdian_day_prize(endtime,p[a].time);
				   printf("目前按天数消费金额为%d",pr);
				}

		 }
		 
	}
	else
	{
		printf("此房屋人入住!");
	}

}

/*******************************************************************/
/*                     8.退房结账函数                              */
/*******************************************************************/
int tuifang()
{    int a,pr;
     Date end;
     fp=fopen("d:\\H.dat","rb");
     for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
	 fclose(fp);	
     printf("请输入退房的房间号");
     scanf("%d",&a);
	 a=find(p,a);
	 if (a!=-1)
		{
			printf("退房客户信息为:\n");
			p_inf(p,a);	
			if(p[a].room_kind==1)//进行价格选择并计算
				{
					if (p[a].method==1)
						{
							printf("请输入当前日期(格式:x月x日x时):\n");
							scanf("%d%d%d",&end.moon,&end.day,&end.hour);
							printf("输入的日期为%d月%d日%d时\n",end.moon,end.day,end.hour);
							pr=biaozhun_hour_prize(end,p[a].time);
							printf("目前按小时消费金额为%d\n",pr);

				} 
			else
				{
							printf("请输入当前日期(格式:x月x日x时):\n");
							scanf("%d%d%d",&end.moon,&end.day,&end.hour);
							printf("输入的日期为%d月%d日%d时\n",end.moon,end.day,end.hour);
							pr=biaozhun_day_prize(end,p[a].time);
							printf("目前按天数消费金额为%d\n",pr);

				}
		}
		else
		{
			if (p[a].method==1)
				{
					printf("请输入当前日期(格式:x月x日x时):\n");
					scanf("%d%d%d",&end.moon,&end.day,&end.hour);
					printf("输入的日期为%d月%d日%d时\n",end.moon,end.day,end.hour);
					pr=zhongdian_hour_prize(end,p[a].time);
					printf("目前按小时消费金额为%d\n",pr);

				} 
			else
				{
					printf("请输入当前日期(格式:x月x日x时):\n");
					scanf("%d%d%d",&end.moon,&end.day,&end.hour);
					printf("输入的日期为%d月%d日%d时\n",end.moon,end.day,end.hour);
					pr=zhongdian_day_prize(end,p[a].time);
					printf("目前按天数消费金额为%d\n",pr);

				}

		}
		if (pr>p[a].yajin)//与押金做比较
			{
				printf("实际支付：%d\n",pr-p[a].yajin);
			} 
		else
			{
				printf("退还：%d\n",p[a].yajin-pr);
			}
		printf("确认退房：1是/2否");
		int g;
		scanf("%d",&g);
		if(g=1)
		{
               printf("感谢您的入住，下次再见!\n");
		}
		
	

	}
	
else
	{
		printf("此房间无人入住!\n");

	}
	
	return 0;
}



/*******************************************************************/
/*                     9.查询房间函数                             */
/*******************************************************************/
int inqury_room()
{
	fp=fopen("d:\\H.dat","rb");
    for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
	fclose(fp);	

	int a,b,z,f;
    char x[10];
	printf("请选择查询方式:1房号查询/2姓名查询\n");//选择查询方式
    scanf("%d",&z);

	switch(z)
	{
		case 1:

           
				printf("请输入查询房号:\n");
				scanf("%d",&f);
				a=find(p,f);
			
				if(a!=-1)
				{
					p_inf(p,a);
				
				}
				else
				{
					printf("此房间无人入住!");
				}
				break;

            
		case 2:

					printf("请输入查询姓名:\n");
					scanf("%s",&x);
					b=namefind(p,x);
              
					if(b!=-1)
					{
						strcpy(	p[b].room_zhuantai,"有人入住");
						printf("房间状态:%s\n",p[b].room_zhuantai);
						p_inf(p,b);
					}
					else
					{
						printf("此房间无人入住!");
					}
						break;
		}

	
			return 0;
}



/*******************************************************************/
/*                    10. 按房间号查询函数                         */
/*******************************************************************/
int find(Customer q[100], int num)
{
		for(int a=0;a<k;a++)
		{ 
		
			if(num==q[a].room_num)//比较输入的房间号与文件中的房间号
			return(a);
		}
		return(-1);
}



/*******************************************************************/
/*                    11.按姓名查询函数                            */
/*******************************************************************/
int namefind(Customer h[100],char xingming[10])
{
	for(int a=0;a<k;a++)
		{ int b;
		
			if(b=strcmp(h[a].name,xingming)==0)//比较输入的姓名与文件中的姓名
			return(a);
		}
		return(-1);

}

				
 /*******************************************************************/
/*                    12.  修改信息函数                               */
/*******************************************************************/

void change()
{       int g,e;
		fp=fopen("d:\\H.dat","ab");
		for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
		fclose(fp);

	    printf("请输入修改信息的房间号:\n");
	    scanf("%d",&e);
	    g=find(p,e);
	    if(g!=-1)
				{
                    printf("原房间信息为:\n");
					p_inf(p,g);
					printf("输入新姓名\n");   //登记姓名
			        scanf("%s",&p[g].name);
					printf("请选择新房间种类\n");  //登记房间种类
					printf("1.标准间\n");
					printf("2.钟点间\n");
					scanf("%d",&p[g].room_kind);
					printf("请输入新房间号\n");  //登记房间号
					scanf("%d",&p[g].room_num);
					printf("请选择新计费方式(输入1或2)\n");
					printf("1.按小时计费\n");
					printf("2.按天数计费\n");
					scanf("%d",&p[g].method);
					printf("请重新输入入住时间(格式:x月x日x时)\n");  //登记入住时间
					scanf("%d%d%d",&p[g].time.moon,&p[g].time.day,&p[g].time.hour);
					printf("入住的时间为%d月%d日%d时\n",p[g].time.moon,p[g].time.day,p[g].time.hour);
					printf("应交押金为$500\n");//登记押金
					scanf("%d",&p[g].yajin);
					printf("实际支付押金%d\n",p[g].yajin);
					printf("修改成功!");
					fp=fopen("d:\\H.dat","ab");//以追加方式打开文件
					fwrite(&p, sizeof( Customer),100,fp);//将结构体写入fp文件中
					fclose(fp);

				
				}
				else
				{
					printf("此房间无人入住!");
				}
				


}


				
 /*******************************************************************/
/*                    13. 删除信息函数                               */
/*******************************************************************/

   void shanchu()
{


 		fp=fopen("d:\\H.dat","ab");
		for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
		fclose(fp);
		int s,h;
		printf("请输入删除的房间号:\n");
		scanf("%d",&s);
		h=find(p,s);
		if(h!=-1)
		{
			p[h].method=p[k-1].method;
			strcpy(p[h].name,p[k-1].name);
			p[h].room_kind=p[k-1].room_kind;
			p[h].room_num=p[k-1].room_num;
			strcpy(p[h].room_zhuantai,p[k-1].room_zhuantai);
			p[h].time.day=p[k-1].time.day;
			p[h].time.hour=p[k-1].time.hour;
			p[h].time.moon=p[k-1].time.moon;
			p[h].yajin=p[k-1].yajin;		  
		}
		









}