#include "helper.h"
#include <stdio.h>

int palindrom_check(char* string) {
  int n, reversed = 0, remainder, original;
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d je palindrom.", original);
    else
        printf("%d nije palindrom.", original);

    return 0;
}