// hq3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>

int main(int argc, char* argv[])
{
	printf("1:加法\n");		
	printf("2:减法\n");
    printf("3:乘法\n");
    printf("4:除法\n");
	char ch; 

	ch=getchar();

	float a,b,c;

	scanf("%f%f",&a,&b);
	
	if(ch<'1'||ch>'4')
	{
       printf("重新输入");
       return 0;
	}
    
	

	if(ch=='1')
	{
		c=a+b;

	}

	else
	{
		if(ch=='2')
		{
			c=a-b;	
		}
		else
		{
			if(ch=='3')
			{
				c=a*b;

			}
			else
			{
			    if(ch=='4')
				c=a/b;
			}
		}
	}

	
printf("%f",c);
	return 0;
}
   