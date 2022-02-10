#include<stdio.h>
#include<stdlib.h>

int main() {
    float prumer;
    int pocet,a,suma;

    suma=0;
    pocet=0;

    printf("Zadejte prirozena cisla oddelena mezerami: ");
    scanf("%i",&a);

    while(a!=0) {
        suma+=a;
        pocet++;
        scanf("%i",&a);
    }

    if (pocet!=0)
        prumer = (float)suma/(float)pocet;
    else
        prumer = 0;
    
    printf("Prumer zadanych cisel = %6.2f",prumer);

    printf("\n\n");

    system("PAUSE");
}
