#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, max;

    printf("Zadejte radu prirozenych cisel ukoncenych 0: ");

    scanf("%i",&a);

    max = a;

    while (a!=0) {
        if (a>max)
            max = a;
    scanf("%i", &a);
    }
    
    printf("max = %i",max);

    printf("\n\n");

    system("PAUSE");
}