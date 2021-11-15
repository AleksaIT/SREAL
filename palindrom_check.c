#include "helper.h"
#include <stdio.h>
#include <string.h>

int palindrom_check(char* string) {

    int l = 0;
    int h = strlen(string) - 1;
 
    while (h > l)
    {
        if (string[l++] != string[h--])
        {
            printf("%s nije palindrom\n", string);
            return;
        }
    }
    printf("%s je palindrom\n", string);
}