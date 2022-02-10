#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int n = 5;
    int a[n][n];
    int b[n][n];
    int i,
        j;

    printf("Zadejte prvky pole a[%i][%i]:\n", n, n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%i", &a[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i % 2 == 0) {
                b[i][j] = 2*a[i][j];
            }
            else {
                b[i][j] = 3*a[i][j];
            }
        }
    }

    printf("\n");

    printf("Pole b[%i][%i]:\n", n, n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%i ", b[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    system("PAUSE");
}