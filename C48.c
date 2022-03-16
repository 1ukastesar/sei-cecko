#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int r = 5;
    int c = 4;
    int max = 0;
    int a[r][c];

    printf("Zadejte hodnoty pole (%i radku po %i hodnotach): \n", r, c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%i", &a[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(a[i][j] > max || j == 0)
                max = a[i][j];
        }
        printf("max%i = %i\n", i + 1, max);
    }

    pause();
}