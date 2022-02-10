#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int n;
    int i;
    int nf = 1;

    printf("Zadejte prirozene cislo n = ");
    scanf("%i",&n);

    for(i=1;i<=n;i++) {
        nf = nf*i;
    }

    printf("n! = %i",nf);

    printf("\n\n");
    
    system("PAUSE");
}