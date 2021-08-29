#include "stdafx.h"
#include "mylib.h"

FILE *fp;
int k;
Customer p[100];


/*******************************************************************/
/*                      1.��׼�䰴Сʱ�ƷѺ���                             */
/*******************************************************************/
int biaozhun_hour_prize(Date endtime,Date starttime)
{

	int prize,hour,day;
    hour=endtime.hour-starttime.hour;
    day=endtime.day-starttime.day;
    if(hour<0)//��СʱС���㣬������ȥһ��
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
/*                      2.�ӵ�䰴Сʱ�շ�/                        */
/*******************************************************************/
int zhongdian_hour_prize(Date endtime,Date starttime)
	{
	
		int prize,hour,day;
		hour=endtime.hour-starttime.hour;
		day=endtime.day-starttime.day;
		if(hour<0)//��СʱС���㣬������ȥһ��
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
/*                     3.��׼�䰴�����ƷѺ���                        */
/*******************************************************************/
int biaozhun_day_prize(Date endtime,Date starttime)
	{

		 int prize,hour,day;
		 hour=endtime.hour-starttime.hour;
		 day=endtime.day-starttime.day;
			if(hour>0)  //��Сʱ����0�㣬������һ
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
/*                     4.�ӵ�䰴���շѺ���                       */
/*******************************************************************/
int zhongdian_day_prize(Date endtime,Date starttime)
{
	
	int prize,hour,day;
	hour=endtime.hour-starttime.hour;
	day=endtime.day-starttime.day;
	if(hour>0)  //��Сʱ����0�㣬������һ
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
/*                     5.�ǼǺ���                                  */
/*******************************************************************/
int dengji()
{     int z=1,x=1; 
    
	  for (k=0;z==1;k++)
		{
			printf("��������\n");   //�Ǽ�����
			scanf("%s",&p[k].name);
		
		
			printf("��ѡ�񷿼�����\n");  //�ǼǷ�������
			printf("1.��׼��\n");
			printf("2.�ӵ��\n");
			scanf("%d",&p[k].room_kind);
		    if(p[k].room_kind==1|| p[k].room_kind==2)
			{
					int i=1,j=51;
					if(p[k].room_kind==1) 
						{
							printf("��׼�䷿��:\n");//��ʾ��׼�䷿���
							while(i<=50)
								{
									printf("%d\t",i++);
									if(i%10==1)printf("\n");
				
								}
						}
					else
						{
									printf("�ӵ�䷿��:\n");  //��ʾ�ӵ�䷿���
									while(j<=100)
									{
										printf("%d\t",j++);
										if(j%10==1)printf("\n");
				
						}
			
				}

			}
			else
				{
									printf("������������������!");
									scanf("%d",&p[k].room_kind);
									int i=1,j=51;
									if(p[k].room_kind==1) 
				{
									printf("��׼�䷿��:\n");//��ʾ��׼�䷿���
									while(i<=50)
										{
											printf("%d\t",i++);
											if(i%10==1)printf("\n");
										}
				}
			else
				{
									printf("�ӵ�䷿��:\n");  //��ʾ�ӵ�䷿���
									while(j<=100)
										{
											printf("%d\t",j++);
											if(j%10==1)printf("\n");
				
										}
			
				}
			}
		
		
	
		printf("�����뷿���\n");  //�ǼǷ����
		scanf("%d",&p[k].room_num);
		
		
		printf("��ѡ��Ʒѷ�ʽ(����1��2)\n");
		printf("1.��Сʱ�Ʒ�\n");
		printf("2.�������Ʒ�\n");
		scanf("%d",&p[k].method);
		if(p[k].method=!1 && p[k].method!=2)//�ǼǼƷѷ�ʽ
		{
			printf("��������,������ѡ��!");
			scanf("%d",&p[k].method);
		}
		printf("��������סʱ��(��ʽ:x��x��xʱ)\n");  //�Ǽ���סʱ��
		scanf("%d%d%d",&p[k].time.moon,&p[k].time.day,&p[k].time.hour);
		printf("��ס��ʱ��Ϊ%d��%d��%dʱ\n",p[k].time.moon,p[k].time.day,p[k].time.hour);
		printf("Ӧ��Ѻ��Ϊ$500\n");//�Ǽ�Ѻ��
		scanf("%d",&p[k].yajin);
		printf("ʵ��֧��Ѻ��%d\n",p[k].yajin);

		fp=fopen("d:\\H.dat","ab");//��׷�ӷ�ʽ���ļ�
        fwrite(&p, sizeof( Customer),100,fp);//���ṹ��д��fp�ļ���
		fclose(fp);

		printf("�Ƿ�����Ǽ�(1��/2��)\n");
		scanf("%d",&z); 
	}

	 
      
        return 0;

}



/*******************************************************************/
/*                     6.������Ϣ��ʾ����                          */
/*******************************************************************/
int p_inf( Customer y[100],int a)
{
	
	char c[100],b[100];
	switch(y[a].room_kind)
		{
		
		
			case 1:strcpy(c,"��׼��");
			break;
		
			case 2:strcpy(c,"�ӵ��");
			break;
	
			default:printf("Error\n");
		
		}
	
	
	if (y[a].method==1)
		{
			strcpy(b,"��Сʱ�Ʒ�");
		} 
	else
		{
			strcpy(b,"�������Ʒ�");
		}
	
	printf("����:%s\n",y[a].name);
	
	printf("�����:%d\n",y[a].room_num);
	
	printf("��������:%s\n",c);
	
	printf("�Ʒѷ�ʽ:%s\n",b);
	
	printf("��סʱ��:\n\n");
	
	printf("%d��",y[a].time.moon);
	
	printf("%d��",y[a].time.day);
	
    printf("%dʱ\n",y[a].time.hour);
	
	printf("Ѻ��:%d\n",y[a].yajin);
	
	return 0;
	
	
	
}


/*******************************************************************/
/*                     7.��ǰ���ò�ѯ����                          */
/*******************************************************************/
void inqury_prize()
{
	Date endtime;
	  fp=fopen("d:\\H.dat","rb");
    for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
	fclose(fp);	

	int a;
	int pr;
	printf("�������ѯ�ķ����:\n");
	scanf("%d",&a);
	a=find(p,a);
	if(a!=-1)
	{
	       if(p[a].room_kind==1)
		   {
                if(p[a].method==1)
				{
		         	printf("�����뵱ǰ����:\n");
		        	scanf("%d%d%d",&endtime.moon,&endtime.day,&endtime.hour);
					printf("���������Ϊ%d��%d��%dʱ(��ʽ:x��x��xʱ)\n",endtime.moon,endtime.day,endtime.hour);
			        pr=biaozhun_hour_prize(endtime,p[a].time);
				    printf("Ŀǰ��Сʱ���ѽ��Ϊ%d",pr);
				}
		         else
				 {
		         	printf("�����뵱ǰ����(��ʽ:x��x��xʱ):\n");
		         	scanf("%d%d%d",&endtime.moon,&endtime.day,&endtime.hour);
					printf("���������Ϊ%d��%d��%dʱ\n",endtime.moon,endtime.day,endtime.hour);
		        	pr=biaozhun_day_prize(endtime,p[a].time);
				    printf("Ŀǰ���������ѽ��Ϊ%d",pr);
				 }
		   }
	     else
		 {
	        	if(p[a].method==1)
				{
			       printf("�����뵱ǰ����(��ʽ:x��x��xʱ):\n");
		           scanf("%d%d%d",&endtime.moon,&endtime.day,&endtime.hour);
				   printf("���������Ϊ%d��%d��%dʱ\n",endtime.moon,endtime.day,endtime.hour);
			       pr=zhongdian_hour_prize(endtime,p[a].time);
				   printf("Ŀǰ��Сʱ���ѽ��Ϊ%d",pr);
				}
		        else 
				{
			       printf("�����뵱ǰ����(��ʽ:x��x��xʱ):\n");
			       scanf("%d%d%d",&endtime.moon,&endtime.day,&endtime.hour);
				   printf("���������Ϊ%d��%d��%dʱ\n",endtime.moon,endtime.day,endtime.hour);
			       pr=zhongdian_day_prize(endtime,p[a].time);
				   printf("Ŀǰ���������ѽ��Ϊ%d",pr);
				}

		 }
		 
	}
	else
	{
		printf("�˷�������ס!");
	}

}

/*******************************************************************/
/*                     8.�˷����˺���                              */
/*******************************************************************/
int tuifang()
{    int a,pr;
     Date end;
     fp=fopen("d:\\H.dat","rb");
     for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
	 fclose(fp);	
     printf("�������˷��ķ����");
     scanf("%d",&a);
	 a=find(p,a);
	 if (a!=-1)
		{
			printf("�˷��ͻ���ϢΪ:\n");
			p_inf(p,a);	
			if(p[a].room_kind==1)//���м۸�ѡ�񲢼���
				{
					if (p[a].method==1)
						{
							printf("�����뵱ǰ����(��ʽ:x��x��xʱ):\n");
							scanf("%d%d%d",&end.moon,&end.day,&end.hour);
							printf("���������Ϊ%d��%d��%dʱ\n",end.moon,end.day,end.hour);
							pr=biaozhun_hour_prize(end,p[a].time);
							printf("Ŀǰ��Сʱ���ѽ��Ϊ%d\n",pr);

				} 
			else
				{
							printf("�����뵱ǰ����(��ʽ:x��x��xʱ):\n");
							scanf("%d%d%d",&end.moon,&end.day,&end.hour);
							printf("���������Ϊ%d��%d��%dʱ\n",end.moon,end.day,end.hour);
							pr=biaozhun_day_prize(end,p[a].time);
							printf("Ŀǰ���������ѽ��Ϊ%d\n",pr);

				}
		}
		else
		{
			if (p[a].method==1)
				{
					printf("�����뵱ǰ����(��ʽ:x��x��xʱ):\n");
					scanf("%d%d%d",&end.moon,&end.day,&end.hour);
					printf("���������Ϊ%d��%d��%dʱ\n",end.moon,end.day,end.hour);
					pr=zhongdian_hour_prize(end,p[a].time);
					printf("Ŀǰ��Сʱ���ѽ��Ϊ%d\n",pr);

				} 
			else
				{
					printf("�����뵱ǰ����(��ʽ:x��x��xʱ):\n");
					scanf("%d%d%d",&end.moon,&end.day,&end.hour);
					printf("���������Ϊ%d��%d��%dʱ\n",end.moon,end.day,end.hour);
					pr=zhongdian_day_prize(end,p[a].time);
					printf("Ŀǰ���������ѽ��Ϊ%d\n",pr);

				}

		}
		if (pr>p[a].yajin)//��Ѻ�����Ƚ�
			{
				printf("ʵ��֧����%d\n",pr-p[a].yajin);
			} 
		else
			{
				printf("�˻���%d\n",p[a].yajin-pr);
			}
		printf("ȷ���˷���1��/2��");
		int g;
		scanf("%d",&g);
		if(g=1)
		{
               printf("��л������ס���´��ټ�!\n");
		}
		
	

	}
	
else
	{
		printf("�˷���������ס!\n");

	}
	
	return 0;
}



/*******************************************************************/
/*                     9.��ѯ���亯��                             */
/*******************************************************************/
int inqury_room()
{
	fp=fopen("d:\\H.dat","rb");
    for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
	fclose(fp);	

	int a,b,z,f;
    char x[10];
	printf("��ѡ���ѯ��ʽ:1���Ų�ѯ/2������ѯ\n");//ѡ���ѯ��ʽ
    scanf("%d",&z);

	switch(z)
	{
		case 1:

           
				printf("�������ѯ����:\n");
				scanf("%d",&f);
				a=find(p,f);
			
				if(a!=-1)
				{
					p_inf(p,a);
				
				}
				else
				{
					printf("�˷���������ס!");
				}
				break;

            
		case 2:

					printf("�������ѯ����:\n");
					scanf("%s",&x);
					b=namefind(p,x);
              
					if(b!=-1)
					{
						strcpy(	p[b].room_zhuantai,"������ס");
						printf("����״̬:%s\n",p[b].room_zhuantai);
						p_inf(p,b);
					}
					else
					{
						printf("�˷���������ס!");
					}
						break;
		}

	
			return 0;
}



/*******************************************************************/
/*                    10. ������Ų�ѯ����                         */
/*******************************************************************/
int find(Customer q[100], int num)
{
		for(int a=0;a<k;a++)
		{ 
		
			if(num==q[a].room_num)//�Ƚ�����ķ�������ļ��еķ����
			return(a);
		}
		return(-1);
}



/*******************************************************************/
/*                    11.��������ѯ����                            */
/*******************************************************************/
int namefind(Customer h[100],char xingming[10])
{
	for(int a=0;a<k;a++)
		{ int b;
		
			if(b=strcmp(h[a].name,xingming)==0)//�Ƚ�������������ļ��е�����
			return(a);
		}
		return(-1);

}

				
 /*******************************************************************/
/*                    12.  �޸���Ϣ����                               */
/*******************************************************************/

void change()
{       int g,e;
		fp=fopen("d:\\H.dat","ab");
		for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
		fclose(fp);

	    printf("�������޸���Ϣ�ķ����:\n");
	    scanf("%d",&e);
	    g=find(p,e);
	    if(g!=-1)
				{
                    printf("ԭ������ϢΪ:\n");
					p_inf(p,g);
					printf("����������\n");   //�Ǽ�����
			        scanf("%s",&p[g].name);
					printf("��ѡ���·�������\n");  //�ǼǷ�������
					printf("1.��׼��\n");
					printf("2.�ӵ��\n");
					scanf("%d",&p[g].room_kind);
					printf("�������·����\n");  //�ǼǷ����
					scanf("%d",&p[g].room_num);
					printf("��ѡ���¼Ʒѷ�ʽ(����1��2)\n");
					printf("1.��Сʱ�Ʒ�\n");
					printf("2.�������Ʒ�\n");
					scanf("%d",&p[g].method);
					printf("������������סʱ��(��ʽ:x��x��xʱ)\n");  //�Ǽ���סʱ��
					scanf("%d%d%d",&p[g].time.moon,&p[g].time.day,&p[g].time.hour);
					printf("��ס��ʱ��Ϊ%d��%d��%dʱ\n",p[g].time.moon,p[g].time.day,p[g].time.hour);
					printf("Ӧ��Ѻ��Ϊ$500\n");//�Ǽ�Ѻ��
					scanf("%d",&p[g].yajin);
					printf("ʵ��֧��Ѻ��%d\n",p[g].yajin);
					printf("�޸ĳɹ�!");
					fp=fopen("d:\\H.dat","ab");//��׷�ӷ�ʽ���ļ�
					fwrite(&p, sizeof( Customer),100,fp);//���ṹ��д��fp�ļ���
					fclose(fp);

				
				}
				else
				{
					printf("�˷���������ס!");
				}
				


}


				
 /*******************************************************************/
/*                    13. ɾ����Ϣ����                               */
/*******************************************************************/

   void shanchu()
{


 		fp=fopen("d:\\H.dat","ab");
		for(int i=0;feof(fp);i++)fread(&p[k], sizeof( Customer),100,fp);
		fclose(fp);
		int s,h;
		printf("������ɾ���ķ����:\n");
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