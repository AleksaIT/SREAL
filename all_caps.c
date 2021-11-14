#include "helper.h"
#include <stdio.h>
#include <string.h>

int all_caps(char* string)
{
	unsigned int i, tmp = strlen(string);

	for(i = 0; i < tmp; i++){
		string[i]=toupper(string[i]);
	}
	printf("\nKonverzija stringa u velika slova: %s\n", string);
}