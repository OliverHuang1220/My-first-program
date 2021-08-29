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
	{printf("请输入一个整数");

	gets(str);
int AFloatArray[Num];
	AFloatArray[Num]=atof(str);

	Num++;

	printf("继续输入吗?[y/Y]\n");

	ch=getch();
	}

	while(ch=='y'||ch=='Y');
    printf("下面%d个数，然后数后面打回车\n",Num);

    int index;
	float Sum=0.0;
    for(index=0;index<Num;index++)

	{ 
		Sum=Sum+AFloatArray[Num];

	}

     printf("Sum=%f\n",Sum);

	return 0;
}
