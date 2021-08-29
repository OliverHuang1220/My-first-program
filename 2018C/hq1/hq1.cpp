// hq1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	int a[2][3]={1,3,5,7,9,11},*p;
	p=&a[1];
	p=p+2;
	printf("%d",*p);
	return 0;

}
