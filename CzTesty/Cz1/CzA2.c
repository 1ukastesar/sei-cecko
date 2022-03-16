#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {

    int a,b,c,next = 0,prev;
    int asc = 0,desc = 0;
    
    printf("Zadejte tri cela cisla a, b, c: \n");

    /*printf("a = ");
    scanf("%i",&a);

    printf("b = ");
    scanf("%i",&b);

    printf("c = ");
    scanf("%i",&c);

    if(a>c)
        if(b>a)

    else if()*/

    scanf("%i",&next);

    for(int i=1; i<3; i++) {
        prev=next;
        scanf("%i",&next);
        if(prev < next)
            asc = 1;
        else
            desc = 1;
    }

    printf("Cisla jsou ");

    if(asc != desc) {
        printf("setridena ");
        if(asc)
            printf("vzestupne");
        else
            printf("sestupne");
    }
    else
        printf("nesetridena");

    printf(".");

    pause();
}