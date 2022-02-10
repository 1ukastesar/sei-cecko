#include<stdio.h>
#include<stdlib.h>

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

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(a[i][j] > max || i == 0)
                max = a[i][j];
        }
    }
    
    printf("\n");
    printf("max = %i", max);

    printf("\n\n");
    system("PAUSE");
}