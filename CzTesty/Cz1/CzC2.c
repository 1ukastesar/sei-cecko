#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {

    int a,b,c,shoda = 0;
    
    printf("Zadejte tri cela cisla a, b, c: \n");

    printf("a = ");
    scanf("%i",&a);

    printf("b = ");
    scanf("%i",&b);

    printf("c = ");
    scanf("%i",&c);

    if(a == c)
        shoda+=2;
    if(a == b)
        shoda+=2;
    if(b == c)
        shoda+=2;
    
    if(shoda > 3)
        shoda = 3;
    
    printf("Pocet shodnych cisel je %i",shoda);

    pause();
}