#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int n;
    int mocnina = 0;
    int i;

    printf("Zadejte cele cislo: \n");

    printf("n = ");
    scanf("%i",&n);

    printf("\n");

    for(i = 1; i<=n; i++)
        mocnina+=i+i-1;

    printf("%i^2 = %i",n,mocnina);

    printf("\n\n");
    
    system("PAUSE");
}