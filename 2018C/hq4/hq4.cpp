// hq4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<stdio.h>


int main(int argc, char* argv[])
{
        float b,c,D,X1,X2;
		printf("�����뷽�̵���������");
			scanf("%f%f",&b,&c);
            D=b*b-4c;
			if(D>0)
			{X1=(-b+sqrt(D))/2;
			 X2=(-b-sqrt(D))/2;
			}
			else
			{printf("����");
			}
			
			
			printf("���̵Ľ�ֱ�Ϊ��X1=%f,X2=%f\n ",X1,X2);

            return 0;

}