#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int n = 10;
    int a[n][n];
    int i,
        j,
        k = 11,
        l = 1;

    printf("Velka nasobilka: \n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            a[i][j] = k*(j+1);
            l++;
        }
        k++;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%4i", a[i][j]);
        }
        printf("\n");
    }

    pause();
}