// hq9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{   char str[100];

    int Num=0;
char ch;
	do
	{printf("������һ������");

	gets(str);
int AFloatArray[Num];
	AFloatArray[Num]=atof(str);

	Num++;

	printf("����������?[y/Y]\n");

	ch=getch();
	}

	while(ch=='y'||ch=='Y');
    printf("����%d������Ȼ���������س�\n",Num);

    int index;
	float Sum=0.0;
    for(index=0;index<Num;index++)

	{ 
		Sum=Sum+AFloatArray[Num];

	}

     printf("Sum=%f\n",Sum);

	return 0;
}
