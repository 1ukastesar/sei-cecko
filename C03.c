#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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

    printf("Trojuhelnik ");

    if(a<(b+c) && b<(a+c) && c<(b+a))
        printf("existuje");
    else
        printf("neexistuje");
    
    printf(".");

    pause();
}