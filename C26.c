#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {

    FILE *fr;
    char c;

    fr = fopen("files/dopis.txt", "r");

    do {
        
        c = getc(fr);
        printf("%c", c);

    } while(c != EOF && c != '\n');

    printf("\n");
    fclose(fr);
    
    pause();
}