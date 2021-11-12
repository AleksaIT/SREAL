#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int all_caps (char * str_array);
int abc_sort (char * str_array);
int no_numbers (char * str_array);
int palindrom_check (char * str_array);

int main()
{
    char str_array[20];
    int ch,i,j;

    scanf("Unesite string: %s", str_array);

    do
    {
        printf("\tMENI");
        printf("\n------------------------------\n");
        printf("\n1:Sva slova stringa prebaci u velika slova");
        printf("\n2:Sortiraj string po abecednom redosledu");
        printf("\n3:Ukloni sve brojeve iz stringa");
        printf("\n4:Proveri da li je string palindrom");
        printf("\n5:Napusti program");
        printf("\n------------------------------\n");
        printf("\nUnesite opciju: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                all_caps(str_array);
            break;
            case 2:
                abc_sort(str_array);
            break;
            case 3:
                no_numbers(str_array);
            break;
            case 4:
                palindrom_check(str_array);
            break;
            case 5:
                exit(0);
            break;
            default:
                printf("Nepostojeca opcija. Molimo Vas odaberite opciju od 1 do 5.\n\n ");
        }
    }while(ch!=5);
    return 0;
}