#include "helper.h"
#include<stdio.h>

int no_numbers(char * string)
{
    char string;
    int i,j;
     for (i = 0; string[i] != '\0'; ++i) {
     while (string[i] >= '0' && string[i] <= '9') {
         for (j = i; string[j] != '\0'; ++j) {
            string[j] = string[j + 1];
         }
         string[j] = '\0';
      }
   }
       printf("String nakon uklanjanja brojeva: %s\n", string);

       return string;
}