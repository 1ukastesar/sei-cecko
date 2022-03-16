#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {

    int i = 0,n,next,odd,sum = 0;
    
    printf("Zadejte radu celych cisel ukoncenych nulou: \n");

    scanf("%i",&n);

    /* Puvodni verze
     * Mam elegantnejsi reseni nize
    if(n>0) {
        do {
                i++;
                scanf("%i",&next);
                if(i%2 == 0);
                    sum+=next;
            } while(next);
    }
    
    else if (n<0) {
        do {
                i++;
                scanf("%i",&next);
                if(i%2 == 1);
                    sum+=next;
            } while(next);
    }*/

    if(n>0) {
        odd = 0;
        printf("Soucet sudych cisel je ");
    }
    else if (n<0) {
        odd = 1;
        printf("Soucet lichych cisel je ");
    }
    else {
        printf("\n");
        printf("Vstupni znak byl nula.\n");
        pause();
        exit(0);
    }

    do {
        i++;
        scanf("%i",&next);
        if(i%2 == odd)
            sum+=next;
    } while(next);

    printf("%i",sum);
    printf(".");

    pause();
}