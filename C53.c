#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

typedef struct {
        float real;
        float imag;
} Complex;

int main() {
    
    Complex a, b, c;

    printf("Zadejte 1. komplexni cislo (2 slozky):\n");
    scanf("%f %f", &a.real, &a.imag);

    printf("Zadejte 2. komplexni cislo (2 slozky):\n");
    scanf("%f %f", &b.real, &b.imag);

    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    printf("c = (%.2g; %.2g)", c.real, c.imag);

    pause();
}