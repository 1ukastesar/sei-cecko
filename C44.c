#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {

    char c;
    int i;
    
    printf("Zadejte ASCII znak: ");
    scanf("%s", &c);
    printf("\n");

    i = (int)c;
    printf("Znak '%c' ma v ASCII hodnotu %i.", c, i);
    printf("\n");
    
    c = (char)i;
    printf("Znak s ASCII hodnotou %i je '%c'.", i, c);

    pause();
}