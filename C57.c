#include<stdio.h>
#include<stdlib.h>

#include "pause.c"
#include "list.c"

void selectionSort(int * list, int length) {
    
    int i, j;
    int temp, min;
    for (i = 0; i < (length - 1); i++) {
        min = (length - 1);
        // hledani minima
        for (j = i; j < (length - 1); j++)
        {
            if(list[min] > list[j])
                min = j;
        }
        // prohozeni prvku
        temp = list[min];
        list[min] = list[i];
        list[i] = temp;
    }
}

int main() {

    int n = askHowMany();
    int list[n];
    
    loadNumbers(n, list);
    selectionSort(list, count(list));
    printList(n, list);

    pause();
}