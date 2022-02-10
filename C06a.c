#include<stdio.h>
#include<stdlib.h>

int main() {

    int a,b,c,max;

    printf("Zadejte 3 cela cisla:\n");

    printf("a = ");
    scanf("%i",&a);

    printf("b = ");
    scanf("%i",&b);

    printf("c = ");
    scanf("%i",&c);

    printf("\n");

    if(a>b && a>c)
        max = a;
    else if(b>a && b>c)  
        max = b;
    else
        max = c;  
    
    printf("max = %i",max);

    printf("\n\n");
    
    system("PAUSE");
}