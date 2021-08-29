// hq8_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{  char str[100];
   int NUM=0;

   printf("你想输入多少数，请输入一个整数然后打回车\n");
   gets(str);
   NUM=atoi(str);
   //申请一个缓冲区 刚好放下NUM个数//
   int *AlntArray;
 
   AlntArray=(int*)malloc(NUM*sizeof(int));
   if(AlntArray==NULL)
   {
	   printf("没有足够的内存，程序结束\n");
	   return-1;

   }
   printf("下面%d个整数，然后数后面打回车\n",NUM);
   int index;

   for( index=0;index<NUM;index++)
   {
	   gets(str);

	   AlntArray[index]=atoi(str);
   }
   printf("输入结束\n");

   //输出NUM个数//
   printf("下面%d个整数，然后数后面打回车\n",NUM);

   for( index=0;index<NUM;index++)

   { 
	   printf("%d",AlntArray[index]);

	   if((index+1)%10==0)

		   printf("\n");
   }

   printf("\n***************************\n");
    int MAX=AlntArray[0];
    int MIN=AlntArray[0];

	for(index=1;index<NUM;index++)

    {if(MAX<AlntArray[index])
		MAX=AlntArray[index];

     if(MIN>AlntArray[index])
		MIN=AlntArray[index];
	}

        printf("MAX=%d",MAX);

        printf("MIN=%d",MIN);

//释放缓冲区//
        free(AlntArray);
        return 0;
	
}
