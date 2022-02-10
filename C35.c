#include<stdio.h>
#include<stdlib.h>

int vstup();
void vypocet(int a, int *p_o, int *p_S);
void vystup(int o, int S);

int main() {
    
    int a, o, S;

    a = vstup();
    vypocet(a, &o, &S);
    vystup(o, S);
    

    printf("\n\n");
    system("PAUSE");
}

int vstup() {
    int a;
    printf("Zadejte stranu ctverce:\n");
    printf("a = ");
    scanf("%i", &a);
    printf("\n");
    return a;
}

void vypocet(int a, int *p_o, int *p_S) {
    *p_o = 4*a;
    *p_S = a*a;
    return;
}

void vystup(int o, int S) {
    printf("Obvod: %i\n", o);
    printf("Obsah: %i", S);
    return;
}