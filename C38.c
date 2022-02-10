#include<stdio.h>
#include<stdlib.h>

int main() {

    int n = 10;
    int m = 5;
    int a[n];
    int j;

    printf("Zadejte %i-prvkovy vektor celych cisel: \n", n);


    for(int i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }

    for(int i = 0; i < m; i++) {
        j = n-i-1;
        a[i] = a[i] + a[j];
        a[j] = a[i] - a[j];
        a[i] = a[i] - a[j];
    }

    printf("\n");
    printf("Vysledny vektor je: \n");

    for(int i = 0; i < n; i++) {
        printf("%i ", a[i]);
    }

    printf("\n\n");
    system("PAUSE");
}