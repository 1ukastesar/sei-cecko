#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int r = 4,
        s = 3;
    int a[r][s];
    int b[s];
    int c[r];
    int i,
        j;

    for(i = 0; i < r; i++)
        c[i] = 0;

    printf("Zadejte hodnoty 2D pole a (%ix%i): \n", r, s);
    for(i = 0; i < r; i++) {
        for(j = 0; j < s; j++) {
            scanf("%i", &a[i][j]);
        }
    }

    printf("\nZadejte hodnoty 1D pole b (%i): \n", s);
    for(i = 0; i < s; i++) {
        scanf("%i", &b[i]);
    }

    
    for(i = 0; i < r; i++) {
        for(j = 0; j < s; j++) {
            c[i] += a[i][j]*b[j];
        }
    }

    printf("\nVysledne pole je: \n");

    for(i = 0; i < r; i++) {
        printf("%i ", c[i]);
    }

    pause();
}