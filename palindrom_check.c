#include "helper.h"
#include <stdio.h>

int palindrom_check(char * str_array) {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d je palindrom.", original);
    else
        printf("%d nije palindrom.", original);

    return 0;
}