#include<stdio.h>
#include<stdlib.h>

int main() {

    int n = 4;
    int scal = 0;
    int a[n], b[n];

    printf("Zadejte 4 cleny 1. vektoru: \n");
    for(int i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }

    printf("Zadejte 4 cleny 2. vektoru: \n");
    for(int i = 0; i < n; i++) {
        scanf("%i", &b[i]);
    }

    for(int i = 0; i < n; i++) {
        scal += a[i] * b[i];
    }

    printf("\n");

    if(scal == 0)
        printf("Vektory jsou kolme, skalarni soucin je 0.");

    else
        printf("Vektory nejsou kolme, skalarni soucin je %i.", scal);
    
    printf("\n\n");
    system("PAUSE");
}