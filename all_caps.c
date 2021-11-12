#include <stdio.h>
#include <string.h>

int all_caps(char * str_array)
{
    char str_array;

    strupr(str_array); // Convert to uppercase

    printf("All caps string je : %s", str_array);

    return str_array;
}