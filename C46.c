#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include "pause.c"

#define STR_MAX_LEN 100+1

// char shift_str(char message[], int shift) {
//     char current[2];
//     for (int i = 0; message[i] != EOF; i++)
//     {
//         current = message[i];
//         current += shift;
//         if(current > 'z')
//             current -= 26;
//         message[i] = current;
//     }
//     return *message;
// }

char shift_by(char message[], int shift) {
    char result[STR_MAX_LEN];
    char current[1+1];
    int i;

    for (i = 0; message[i] != '\0'; i++) 
    {
        current = message[i];
        if (isupper(current))
        {
            result[i] = (current + shift - 'A' % 26) + 'A';
        }
        else if (islower(current))
        {
            result[i] = (current + shift - 'a' % 26) + 'a';
        }
    }
    return result;
}


int main() {
    
    char inp_str[STR_MAX_LEN],
         enc_str[STR_MAX_LEN],
         dec_str[STR_MAX_LEN];

    int shift;

    printf("Caesarova sifra");
    printf("\n---------------\n");

    printf("Zadejte zpravu: ");
    fgets(inp_str, STR_MAX_LEN, stdin);
    inp_str[strcspn(inp_str, "\n")] = 0;

    printf("Zadejte posun: ");
    scanf("%i", shift);

    enc_str = shift_by(inp_str, shift);
    printf("\n%s", enc_str);

    dec_str = shift_by(enc_str, 0 - shift);
    printf("\n%s", dec_str);

    pause();
}