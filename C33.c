#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int obsah(int x, int y);
int soucet(int x, int y, int z);
void zobraz(int S1, int S2, int S3, int S);

int main() {
    
    int a1,b1, a2,b2, a3,b3;
    int S1, S2, S3, S;

    printf("Zadejte 3 dvojice cisel - rozmery 3 obdelniku: \n");
    scanf("%i %i %i %i %i %i", &a1, &b1, &a2, &b2, &a3, &b3);
    printf("\n");

    S1 = obsah(a1, b1);
    S2 = obsah(a2, b2);
    S3 = obsah(a3, b3);

    S = soucet(S1, S2, S3);
    zobraz(S1, S2, S3, S);

    pause();
}

int obsah(int x, int y) {
    return x*y;
}

int soucet(int x, int y, int z) {
    return x+y+z;
}

void zobraz(int S1, int S2, int S3, int S) {
    printf("S1 = %i\n", S1);
    printf("S2 = %i\n", S2);
    printf("S3 = %i\n", S3);
    printf("S = %i\n", S);
    return;
}