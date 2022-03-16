#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int i;
    int c;

    printf("Zadejte retezec znaku: \n");

    while(c!='*') {
        c = getchar();
        switch(c) {
            case ' ':
            case '\t':
                putchar('#');
                break;
            case '*':
                break;
            default:
                putchar(c);
                break;
        }
    }

    pause();
}