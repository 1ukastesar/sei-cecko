#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int n;
    int i = 1;
    int nf = 1;

    printf("Zadejte prirozene cislo n = ");
    scanf("%i",&n);

    while(i<=n) {
        nf = nf*i;
        i++;
    }

    printf("n! = %i",nf);

    pause();
}