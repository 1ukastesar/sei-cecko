#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a,b,c;
    int a2,b2,c2;

    printf("Zadejte rozmery stran trojuhelniku:\n");

    printf("a = ");
    scanf("%i",&a);

    printf("b = ");
    scanf("%i",&b);

    printf("c = ");
    scanf("%i",&c);

    printf("\n");

    a2 = (int) pow((double) a,2);
    b2 = (int) pow((double) b,2);
    c2 = (int) pow((double) c,2);

    printf("Trojuhelnik ");

    if(c2==(a2+b2) || a2==(b2+c2) || b2==(a2+c2))
        printf("je");
    else
        printf("neni");
    
    printf(" pravouhly.\n\n");

    system("PAUSE");
}