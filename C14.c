#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int n,r;

    printf("Zadejte radu prirozenych cisel ukoncenych 0: ");

    while(1) {
        scanf("%i",&n);
        r+=n;
        if(n==0)
            break;
    }

    printf("Soucet cisel je %i.",r);
    pause();
}