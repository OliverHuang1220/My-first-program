// hq5_2.cpp : Defines the entry point for the console application.
//
//ʹ��for������n���ۼ�//
#include "stdafx.h"
#include<stdio.h>

int main(int argc, char* argv[])
{      int i,Result=0,n;

       printf("������һ������n\n");

       scanf("%d",&n);

       for(i=1;i<=n;i++)
	   {

       Result=Result+i;

	   }
	   
       

	   
       printf("Result=%d\n",Result);

	   return 0;
}
