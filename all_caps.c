#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size 


int all_caps(char * str_array)
{
    char str[MAX_SIZE];

    strupr(str_array); // Convert to uppercase

    printf("Uppercase string : %s", str_array);

    return str_array;
}