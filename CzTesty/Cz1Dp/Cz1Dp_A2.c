#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int n = 10;
    int a[n*n];
    int i,
        j,
        k;

    printf("10x od jedne do deseti: \n\n");

    for(i = 0; i < n*n; i += 10) {
        for(j = 0; j < n; j++) {
            k = i + j;
            a[k] = j + 1;
        }
    }

    for(i = 0; i < n*n; i += 10) {
        for(j = 0; j < n; j++) {
            k = i + j;
            printf("%i ", a[k]);
        }
        printf("\n");
    }

    pause();
}