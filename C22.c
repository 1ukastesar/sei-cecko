#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int i,j;

    printf("Mala nasobilka: ");
    printf("\n");

    for(i=1; i<=10; i++) {
        for(j=1; j<=10; j++) {
            printf("%i\t",j*i);
        }
        printf("\n");
    }

    printf("\n");
    printf("Velka nasobilka: ");
    printf("\n");

    for(i=11; i<=20; i++) {
        for(j=1; j<=10; j++) {
            printf("%i\t",j*i);
        }
        printf("\n");
    }

    pause();
}