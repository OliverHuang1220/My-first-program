// hq6.cpp : Defines the entry point for the console application.
//
//ʹ��while������n���۳�//
#include "stdafx.h"
#include<stdio.h>

int main(int argc, char* argv[])
{int i=1,n,Result=1;
	printf("����һ������n\n");

	scanf("%d",&n);		

	while(i<=n)

	{
		Result=Result*i;   
		i++;
	};
	printf("Result=%d\n",Result);

	return 0;
}
