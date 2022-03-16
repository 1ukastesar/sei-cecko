#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {

    int next;
    int posSum = 0, negSum = 0;
    int totalPos = 0, totalNeg = 0;
    
    printf("Zadejte radu celych cisel ukoncenych nulou: \n");

    do {
        scanf("%i",&next);
        
        if(next > 0) {
            posSum+=next;
            totalPos++;
        }
        else if (next < 0) {
            negSum+=next;
            totalNeg++;
        }
        else 
            break;
    } while(next);

    printf("Pocet kladnych cisel je %i a jejich soucet je %i.",totalPos,posSum);
    printf("\n");
    printf("Pocet zapornych cisel je %i a jejich soucet je %i.",totalNeg,negSum);

    pause();
}