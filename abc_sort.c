#include "helper.h"
#include<stdio.h>
#include<string.h>

int abc_sort(char * str_array)
{
   int i,j,count = 20, temp;
   char str_array;

   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str_array[i],str_array[j])>0){
            strcpy(temp,str_array[i]);
            strcpy(str_array[i],str_array[j]);
            strcpy(str_array[j],temp);
         }
      }
   printf("Abecedno sortiran string:");
   for(i=0;i<=count;i++)
      puts(str_array[i]);
   
   return str_array;
}