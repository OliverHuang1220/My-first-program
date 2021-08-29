// hq5_2.cpp : Defines the entry point for the console application.
//
//使用for语句计算n的累加//
#include "stdafx.h"
#include<stdio.h>

int main(int argc, char* argv[])
{      int i,Result=0,n;

       printf("请输入一个整数n\n");

       scanf("%d",&n);

       for(i=1;i<=n;i++)
	   {

       Result=Result+i;

	   }
	   
       

	   
       printf("Result=%d\n",Result);

	   return 0;
}
