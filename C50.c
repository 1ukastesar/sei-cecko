#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int r = 5;
    int c = 4;
    int sum = 0;
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
            sum += a[i][j];
        }
        printf("sum%i = %i\n", i + 1, sum);
    }

    printf("\n");
    system("PAUSE");
}