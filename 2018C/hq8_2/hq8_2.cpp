// hq8_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{  char str[100];
   int NUM=0;

   printf("���������������������һ������Ȼ���س�\n");
   gets(str);
   NUM=atoi(str);
   //����һ�������� �պ÷���NUM����//
   int *AlntArray;
 
   AlntArray=(int*)malloc(NUM*sizeof(int));
   if(AlntArray==NULL)
   {
	   printf("û���㹻���ڴ棬�������\n");
	   return-1;

   }
   printf("����%d��������Ȼ���������س�\n",NUM);
   int index;

   for( index=0;index<NUM;index++)
   {
	   gets(str);

	   AlntArray[index]=atoi(str);
   }
   printf("�������\n");

   //���NUM����//
   printf("����%d��������Ȼ���������س�\n",NUM);

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

//�ͷŻ�����//
        free(AlntArray);
        return 0;
	
}
