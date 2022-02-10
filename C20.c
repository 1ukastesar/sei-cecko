#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int a,b;

    printf("Zadejte 2 cela cisla:\n");

    printf("a = ");
    scanf("%i",&a);

    printf("b = ");
    scanf("%i",&b);

    printf("\n");

    while(a!=b) {
        if(a>b)
            a-=b;
        else
            b-=a;
    }

    printf("NSD = %i",a);

    printf("\n\n");
    
    system("PAUSE");
}