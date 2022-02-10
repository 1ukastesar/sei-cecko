#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE *fr;
    char c;
    int chars = 0,
    spaces = 0,
    tabs = 0,
    rows = 0,
    digits = 0,
    other = 0,
    wasDigit = 0;
    char isDigit[] = "0123456789";

    fr = fopen("files/vstup.dat", "r");
    printf("Statistika textoveho souboru\n");
    printf("----------------\n");

    while((c = getc(fr)) != EOF) {

        chars++;
        switch(c) {
            case ' ':
                spaces++;
                break;
            case '\t':
                tabs++;
                break;
            case '\n':
                rows++;
                break;
            default:
                for(int i = 0; i<(sizeof(isDigit)/sizeof(char)); i++) {
                    if(c == isDigit[i]) {
                        digits++;
                        wasDigit = 1;
                    }
                }
                
                if(wasDigit == 0) {
                    other++;
                }
                else
                    wasDigit = 0;
        }

    }

    printf("Znaky: %i\n", chars);
    printf("Mezery: %i\n", spaces);
    printf("Tabulatory: %i\n", tabs);
    printf("Radky: %i\n", rows);
    printf("Cislice: %i\n", digits);
    printf("Ostatni znaky: %i\n", other);

    system("PAUSE");
}