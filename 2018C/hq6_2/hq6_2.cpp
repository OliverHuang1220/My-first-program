// hq6_2.cpp : Defines the entry point for the console application.
//
//使用for语句进行n的累乘运算//
#include "stdafx.h"
#include<stdio.h>

int main(int argc, char* argv[])
{      int i,Result=1,n;

       printf("请输入一个整数n\n");

       scanf("%d",&n);

       for(i=1;i<=n;i++)
	   {

       Result=Result*i;

	   }
	        	  
       printf("Result=%d\n",Result);

	  
       return 0;
}







      
