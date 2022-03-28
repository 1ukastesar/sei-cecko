#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include "pause.c"

#define STR_MAX_LEN 100+1

char * shift_by(char message[], int shift) {
    char result[STR_MAX_LEN] = "";
    int i;

    for (i = 0; message[i] != '\0'; i++) 
    {

        if (isupper(message[i]))
        {
            result[i] = (message[i] + shift - 'a') % 26 + 'a';
        }
        else if (islower(message[i]))
        {
            result[i] = (message[i] + shift - 'a') % 26 + 'a';
        }
    }
    return result;
}

int main() {
    
    char inp_str[STR_MAX_LEN] = "",
         enc_str[STR_MAX_LEN] = "",
         dec_str[STR_MAX_LEN] = "";

    int shift;

    printf("Caesarova sifra");
    printf("\n---------------\n");

    printf("Zadejte zpravu: ");
    fgets(inp_str, STR_MAX_LEN, stdin);
    inp_str[strcspn(inp_str, "\n")] = 0;

    printf("Zadejte posun: ");
    scanf("%i", &shift);

    // enc_str = shift_by(inp_str, shift);
    printf("\n%s", shift_by(inp_str, shift));

    // dec_str = shift_by(enc_str, 0 - shift);
    // printf("\n%s", dec_str);

    pause();
}