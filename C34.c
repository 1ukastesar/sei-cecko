#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include "pause.c"

float vstup();
void vypocet(float r, float *p_o, float *p_S);
void vystup(float o, float S);

int main() {
    
    float r, o, S;

    r = vstup();
    vypocet(r, &o, &S);
    vystup(o, S);

    pause();
}

float vstup() {
    float r;
    printf("Zadejte polomer kruhu: \n");
    printf("r = ");
    scanf("%f", &r);
    printf("\n");
    return r;
}

void vypocet(float r, float *p_o, float *p_S) {
    *p_o = 2*M_PI*r;
    *p_S = M_PI*r*r;
    return;
}

void vystup(float o, float S) {
    printf("Obvod: %.2f\n", o);
    printf("Obsah: %.2f", S);
    return;
}