#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include "pause.c"

#define STR_MAX_LEN 100+1

char * strshift(char string[], int shift) {
    char * result;
    result = malloc(STR_MAX_LEN);

    int i;

    for (i = 0; string[i] != '\0'; i++) 
    {

        if (isupper(string[i]))
        {
            result[i] = (string[i] + shift - 'a') % 26 + 'a';
        }
        else if (islower(string[i]))
        {
            result[i] = (string[i] + shift - 'a') % 26 + 'a';
        }
    }
    return result;
}

int main() {
    
    char inp_str[STR_MAX_LEN] = "";
    char * enc_str,
         * dec_str;

    int shift;

    printf("Caesarova sifra");
    printf("\n---------------\n");

    printf("Zadejte zpravu: ");
    fgets(inp_str, STR_MAX_LEN, stdin);
    inp_str[strcspn(inp_str, "\n")] = 0;

    printf("Zadejte posun: ");
    scanf("%i", &shift);

    enc_str = strshift(inp_str, shift);
    printf("\n%s", enc_str);

    dec_str = strshift(enc_str, -shift);
    printf("\n%s", dec_str);

    pause();
}