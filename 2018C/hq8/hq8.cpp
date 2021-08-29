// hq8.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{   int AlntArray[1000];
	char str[100];
    int Num=0 ;
    char c;
	do
	{
		printf("请输入一个整数\n");

		gets(str);

		AlntArray[Num]=atoi(str);

		Num++;

		printf("继续输入吗?[y/Y]\n");
			
        c=getchar();

	}
    while(c=='y'||c=='Y');

    int Max=AlntArray[0];

	for(int i=1;i<Num;i++)

		if(Max<AlntArray[i])
		{

        Max=AlntArray[i];
		}
		printf("Max=%d\n,Max");
			return 0;

}
