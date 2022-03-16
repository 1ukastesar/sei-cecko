#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main(){
    int a,b,c;

    printf("Zadejte rozmery stran trojuhelniku:\n");

    printf("a = ");
    scanf("%i",&a);

    printf("b = ");
    scanf("%i",&b);

    printf("c = ");
    scanf("%i",&c);

    printf("\n");

    printf("Trojuhelnik je ");

    if(a==b && b==c)
        printf("rovnostranny");
    else if (a==b || b==c || c==a)
        printf("rovnoramenny");
    else
        printf("obecny");
    
    printf(".");

    pause();
}