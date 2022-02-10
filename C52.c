#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int n = 5,
        o = 5;
    int i,
        j;
    int a[n][o];
    int sum_a = 0,
        sum_b = 0;

    printf("Zadejte hodnoty pole %ix%i (cela cisla): \n", n, o);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%i", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i < j)
                sum_a += a[i][j];
            else if(i > j)
                sum_b += a[i][j];
        }
    }

    printf("\n");
    printf("Soucet nad diagonalou: %i\n", sum_a);
    printf("Soucet pod diagonalou: %i\n", sum_b);

    printf("\n");
    system("PAUSE");
}