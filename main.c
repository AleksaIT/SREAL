#include "helper.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int all_caps (char* string);
//int abc_sort (char* string);
//int no_numbers (char* string);
//int palindrom_check (char* string);

int main(int argc, char** argv)
{
/*
    char* lowercasetext = argv[1];
    char* unsorted = argv[2];
    char* withnumbers = argv[3];
    char* palindrom = argv[4];

    all_caps(lowercasetext);
    abc_sort(unsorted);
    no_numbers(withnumbers);
    palindrom_check(palindrom);*/

int tmp1 = argc;
int tmp2 = atoi(argv[tmp1]);

int opcija = tmp2;
 do
    {
        switch(opcija)
        {
            case 1:
    for (int i=1; i < argc; i++) {
	all_caps(argv[i]); }
            break;
            case 2:
    for (int i=1; i < argc; i++) {
	unsorted(abc_sort); }
            break;
            case 3:
    for (int i=1; i < argc; i++) {
	withnumbers(no_numbers); }
            break;
            case 4:
    for (int i=1; i < argc; i++) {
  	palindrom(palindrom_check); }
            break;
            case 5:
                exit(0);
            break;
            default:
                printf("Nepostojeca opcija. Molimo Vas unesite opciju od 1 do 5 u poslednji parametar.\n\n ");
        }
    }while(opcija!=5);

    return 0;
}
