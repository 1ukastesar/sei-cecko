#include<stdio.h>
#include<stdlib.h>

int main() {

    int n = 10;
    int a[n][n];

    printf("\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    system("PAUSE");
}