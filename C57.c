#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

#define count(array) (sizeof(array) / sizeof((array)[0]))

int main() {

    int n;

    printf("Zadejte pocet cisel: ");
    scanf("%i", &n);

    int list[n];

    printf("Zadejte cisla: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &list[i]);
    }
    
    int temp, min;

    for (int i = 0; i < (count(list) - 1); i++)
    {
        min = (count(list) - 1);
        
        for (int j = i; j < (count(list) - 1); j++)
        {
            if(list[min] > list[j])
                min = j;
        }

        temp = list[min];
        list[min] = list[i];
        list[i] = temp;
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%i ", list[i]);
    }

    pause();
}