#include<stdio.h>
#include<stdlib.h>

int max2(int a, int b);
int max3(int a, int b, int c);

int main() {

    int n, k,
    maxPrub[] = {0, 0, 0},
    maxCelk = 0;

    printf("Zadejte 9 celych cisel: \n");

    for(int i = 1; i <= 3; i++) {

        k = i-1;

        for(int j = 1; j <= 3; j++) {
            scanf("%i", &n);
            maxPrub[k] = max2(n, maxPrub[k]);
        }

        printf("\nmax%i = %i", i, maxPrub[k]);   

    }

    maxCelk = max3(maxPrub[0], maxPrub[1], maxPrub[2]);
    
    printf("\n\n");
    printf("max = %i", maxCelk);

    printf("\n\n");
    
    system("PAUSE");
}

int max2(int a, int b) {

    if(a > b)
        return a;
    else
        return b;
}

int max3(int a, int b, int c) {

    int max;

    if(a > b)
            max = a;
        else
            max = b;  
        if(c > max)
            max = c;
    
    return max;
}