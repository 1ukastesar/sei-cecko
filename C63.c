#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int n = 3;
    int a[n][n];
    int b[n][n];
    int c[n][n];
    int i,
        j,
        k;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            c[i][j] = 0;
    }

    printf("Zadejte hodnoty 2D pole a (%ix%i): \n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%i", &a[i][j]);
        }
    }

    printf("Zadejte hodnoty 2D pole b (%ix%i): \n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%i", &b[i][j]);
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < n; k++)
                c[i][j] += a[i][k]*b[k][j];
        }
    }

    printf("\nVysledne 2D pole c: \n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%i ", c[i][j]);
        }
        printf("\n");
    }

    pause();
}