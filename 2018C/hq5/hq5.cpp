// hq5.cpp : Defines the entry point for the console application.
//
//使用while语句进行n的累加运算//
#include "stdafx.h"

#include<stdio.h>
int main(int argc, char* argv[])  
{
	int i=1,n,Result=0;
	printf("输入一个整数n\n");

	scanf("%d",&n);		

	while(i<=n)

	{
		Result=Result+i;   
		i++;
	};
	printf("Result=%d\n",Result);

	return 0;
}
