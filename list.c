#include<stdio.h>
#include<stdlib.h>

#define count(array) (sizeof(array) / sizeof((array)[0]))

int askHowMany() {

    int n;

    printf("n = ");
    scanf("%i", &n);

    return n;
}

void loadNumbers(int n, int * list) {

    printf("Zadejte radu %i cisel: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &list[i]);
    }
}

void printList(int n, int * list) {
    
    printf("Serazena rada: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%i ", list[i]);
    }
}