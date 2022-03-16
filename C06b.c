#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {

    int a,b,c,max;

    printf("Zadejte 3 cela cisla:\n");

    printf("a = ");
    scanf("%i",&a);

    printf("b = ");
    scanf("%i",&b);

    printf("c = ");
    scanf("%i",&c);

    printf("\n");

    if(a > b)
        max = a;
    else
        max = b;  
    if(c > max)
        max = c;
        
    printf("max = %i",max);

    pause();
}
