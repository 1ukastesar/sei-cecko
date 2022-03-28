#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include "pause.c"

#define STR_MAX_LEN 100+1

void strshift(char string[], char * result, int shift) {
    int i;

    if(shift < 0)
        shift = 26 + (shift % 26);

    for (i = 0; string[i] != '\0'; i++) 
    {

        if (isupper(string[i]))
        {
            result[i] = ((string[i] + shift - 'A') % 26) + 'A';
        }
        else if (islower(string[i]))
        {
            result[i] = ((string[i] + shift - 'a') % 26) + 'a';
        }
        else
            result[i] = string[i];
    }
}

int main() {
    
    char inp_str[STR_MAX_LEN];
    char enc_str[STR_MAX_LEN] = "";
    char dec_str[STR_MAX_LEN] = "";

    int shift;

    printf("Caesarova sifra");
    printf("\n---------------\n");

    printf("Zadejte zpravu: ");
    fgets(inp_str, STR_MAX_LEN, stdin);
    inp_str[strcspn(inp_str, "\n")] = 0;

    printf("Zadejte posun: ");
    scanf("%i", &shift);

    printf("\n");
    strshift(inp_str, enc_str, shift);
    printf("Zasifrovana zprava: %s", enc_str);

    printf("\n");
    strshift(enc_str, dec_str, -shift);
    printf("Rozsifrovana zprava: %s", dec_str);

    pause();
}