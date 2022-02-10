#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int m = 10;
    int n = 5;
    int a[m], b[n];

    printf("Zadejte %i-prvkovy vektor celych cisel: \n", m);

    for(int i = 0; i < m; i++) {
        scanf("%i", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        b[i] = a[i] + a[m-i-1];
    }

    printf("\n");
    printf("Vysledny vektor je: \n");

    for (int i = 0; i < n; i++) {
        printf("%i ", b[i]);
    }
    
    printf("\n\n");
    system("PAUSE");
}