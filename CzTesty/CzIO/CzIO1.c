#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {

    FILE *fw;
    int a,b,c;
    int V;
    
    printf("a = ");
    scanf("%i",&a);

    printf("b = ");
    scanf("%i",&b);

    printf("c = ");
    scanf("%i",&c);

    V = a*a-2*b+3*c;

    fw = fopen("vystup.txt", "w");
    fprintf(fw, "%i",V);
    
    fclose(fw);
    pause();
}