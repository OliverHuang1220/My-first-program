// hq6_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
int main(int argc, char* argv[])
{
        int i=1,Result,n;

	    printf("������һ������n\n");

        scanf("%d",&n);  
	   
	    do

	    i++;

		Result=Result*i;

		while(i<=n)

        printf("Result=%d\n",Result);


    	return 0;
}
