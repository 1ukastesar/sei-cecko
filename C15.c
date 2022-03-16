#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    int a,suma;
    suma=0;

    printf("Zadejte radu prirozenych cisel ukoncenych 0: ");
    
    scanf("%i",&a);

    while(a!=0) {
    if(a>0)
        suma+=a;
    scanf("%i",&a);
    }

    printf("Soucet kladnych cisel = %i",suma);

    pause();
}