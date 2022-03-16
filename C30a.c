#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int max2(int a, int b);
int max3(int a, int b, int c);

int main() {

    int a, b, c, maxPrub, maxCelk = 0;

    printf("Zadejte 9 celych cisel: \n");

    for(int i = 1; i <= 3; i++) {
            
        scanf("%i", &a);
        scanf("%i", &b);
        scanf("%i", &c);
        
        maxPrub = max3(a, b, c);
        maxCelk = max2(maxCelk, maxPrub);
        printf("\nmax%i = %i", i, maxPrub);
            
    }
    
    printf("\n\n"); 
    printf("max = %i", maxCelk);

    pause();
}

int max2(int a, int b) {

    if(a > b)
        return a;
    else
        return b;
}

int max3(int a, int b, int c) {

    int max;

    if(a > b)
            max = a;
        else
            max = b;  
        if(c > max)
            max = c;
    
    return max;
}