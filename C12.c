#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    float c,k,f;

    printf("Celsius\t\tKelvin\t\tFahrenheit");
    printf("\n");

    for(c = -50; c<=50; c=c+20) {
        k = c + 273.16;
        f = (9.0/5.0) * c + 32;

        printf("%6.2f\t\t",c);
        printf("%6.2f\t\t",k);
        printf("%6.2f",f);
        printf("\n");
    }

    pause();
}