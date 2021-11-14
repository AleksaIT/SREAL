#include "helper.h"
#include<stdio.h>
#include<string.h>

int abc_sort(char * string)
{
	int i,j, pom = strlen(string);
	char tmp;

	for (i=0;i<pom-1;i++){
		for(j=i+1; j<pom;j++){
			if(string[i]>string[j]){
				tmp = string[i];
				string[i] = string[j];
				string[j] = tmp;
			}
		}
	}
	printf("\nString sortiran po abecednom redosledu: %s\n", string);
}