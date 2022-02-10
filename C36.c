#include<stdio.h>
#include<stdlib.h>

int main() {

    int n = 10;
    int a[n], max, min;

    printf("Zadejte radu %i celych cisel: \n",n);

    for(int i = 0; i < n; i++) {
        scanf("%i", &a[i]);

        if(a[i] > max || i == 0)
            max = a[i];
        if(a[i] < min || i == 0)
            min = a[i];
    }

    printf("\n");
    printf("max = %i\n", max);
    printf("min = %i\n", min);
    printf("max - min = %i\n", max-min);

    printf("\n\n");
    system("PAUSE");

}