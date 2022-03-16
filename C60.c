#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int v, n;
    int found = 0;
    int i;

    printf("Zadejte vzor: ");
    scanf("%i", &v);

    printf("Zadejte pocet cisel: ");
    scanf("%i", &n);
    int a[n];

    printf("Zadejte radu cisel: \n");
    for(i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }

    printf("\n");

    for(i = 0; i < n; i++) {
        if(a[i] == v) {
            found = i;
            break;
        }
    }

    if(found != 0) {
        printf("Prvek nalezen na %i. pozici (index %i).", found + 1, found);
    } else {
        printf("Prvek nenalezen.");
    }    

    pause();
}