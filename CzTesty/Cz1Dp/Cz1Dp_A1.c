#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int n = 20;
    int a[n];
    int b[n/2];
    int i;

    printf("Zadejte pole 20 cisel: \n");

    for(i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(i % 2 == 0) {
            if(a[i] > a[i+1])
                b[i/2] = a[i];
            else
                b[i/2] = a[i+1];
        }
    }

    printf("\nVysledek: \n");

    for(i = 0; i < n/2; i++) {
        printf("%i ", b[i]);
    }

    printf("\n\n");
    system("PAUSE");
}