#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int vstup(void);
int mocnina2(int x);
int mocnina3(int x);
void porovnani(int x2, int x3);

int main() {

    int x, x2, x3;
    
    x = vstup();
    x2 = mocnina2(x);
    x3 = mocnina3(x);

    printf("x^2 = %i\n", x2);
    printf("x^3 = %i\n", x3);
    porovnani(x2, x3);

    pause();
}

int vstup(void) {

    int x;
    printf("Zadejte cele cislo: \n");
    printf("x = ");
    scanf("%i", &x);
    printf("\n");
    return x;
}

int mocnina2(int x) {
    return x*x;
}

int mocnina3(int x) {
    return x*x*x;
}

void porovnani(int x2, int x3) {
    if(x2 < x3)
        printf("x^2 < x^3");
    else if(x2 = x3)
        printf("x^2 = x^3");
    else
        printf("x^2 > x^3");

    return;
}