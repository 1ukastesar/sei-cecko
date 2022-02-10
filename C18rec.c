#include<stdio.h>
#include<stdlib.h>

int faktorial(int n);

int main() {

    int n,nF;

    printf("Zadejte prirozene cislo n = ");
    scanf("%i", &n);

    nF = faktorial(n);
    printf("n! = %i", nF);

    printf("\n\n");
    
    system("PAUSE");
}

int faktorial(int n) {
    if(n == 1)
        return 1;
    else
        return(n*faktorial(n-1));
}