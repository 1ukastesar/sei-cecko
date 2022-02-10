#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int a,b;
    int podil = 0;

    printf("Zadejte 2 cela cisla:\n");

    printf("a = ");
    scanf("%i",&a);

    printf("b = ");
    scanf("%i",&b);

    printf("\n");

    if(b!=0) {
    
        while(a>=b) {
            a-=b;
            podil++;
        }

        printf("Podil = %i\n",podil);
        printf("Zbytek = %i",a);

    } else {
        printf("Chyba; druhe cislo se rovna nule.\n");
        printf("Nulou nelze delit!");
    }

    printf("\n\n");
    
    system("PAUSE");
}