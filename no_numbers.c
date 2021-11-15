#include "helper.h"
#include<stdio.h>

int no_numbers(char* string)
{
	int tmp = strlen(string);

	for (int i=0; i < tmp; i++){
		if(isdigit(string[i])){
			memmove(&string[i], &string[i + 1], tmp - i);  
		}
	}
   
	printf("\nString sa izbacenim brojevima: %s\n", string);
}


   //https://stackoverflow.com/