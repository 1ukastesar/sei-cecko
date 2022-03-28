#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "pause.c"

#define STR_MAX_LEN 100+1

int main() {
    
    char samohlaska[] = "aeiouyAEIOUY";
    char souhlaska [] = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
    char cislo     [] = "1234567890";

    int samohlasky = 0,
        souhlasky  = 0,
        cislice    = 0,
        ostatni    = 0;

    char str[100+1];
    printf("Zadejte retezec, ktery chcete analyzovat: \n");
    // scanf() nacte string jen po prvni mezeru
    // gets() nehlida velikost cteneho stringu => muze dojit k Buffer overflow
    // gets(str);
    fgets(str, STR_MAX_LEN, stdin);
    // fgets() zase precte i znak \n, ten tedy musime odstranit
    str[strcspn(str, "\n")] = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if (strchr(samohlaska, str[i]))
            samohlasky++;
        else if (strchr(souhlaska, str[i])) {
            souhlasky++;
            if(str[i] == 'h' || str[i] == 'H') {
                if(str[i-1] == 'c' || str[i-1] == 'C') {
                    souhlasky--;
                }
            }
        }
        else if (strchr(cislo, str[i]))
            cislice++;
        else
            ostatni++;
    }

    printf("\n");
    printf("Analyzovany text: %s\n", str);
    printf("-----------------\n");
    printf("Samohlasky: %i\n", samohlasky);
    printf("Souhlasky: %i\n", souhlasky);
    printf("Cislice: %i\n", cislice);
    printf("Ostatni: %i", ostatni);

    pause();
}