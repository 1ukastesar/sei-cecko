#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int n;
    int i;
    int r = 0;

    printf("Zadejte prirozene cislo n = ");
    scanf("%i",&n);

    for(i=0;i<=n;i++) {
        r+=i;
    }

    printf("Soucet prvnich n prirozenych cisel je %i.",r);

    printf("\n\n");
    
    system("PAUSE");
}