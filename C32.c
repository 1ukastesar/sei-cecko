#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int vstup();
int obvod(int a);
int obsah(int a);
void vystup(int o, int S);

int main() {
    
    int a, o, S;

    a = vstup();
    o = obvod(a);
    S = obsah(a);
    vystup(o, S);

    pause();
}

int vstup() {
    int a;
    printf("Zadejte stranu ctverce: \n");
    printf("a = ");
    scanf("%i", &a);
    printf("\n");
    return a;
}

int obvod(int a) {
    return 4*a;
}

int obsah(int a) {
    return a*a;
}

void vystup(int o, int S) {
    printf("Obvod: %i\n", o);
    printf("Obsah: %i", S);
    return;
}