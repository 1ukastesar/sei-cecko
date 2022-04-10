#include<stdio.h>
#include<stdlib.h>

#include "pause.c"
#include "list.c"

void insertionSort(int * list, int length) {

    int i, j;
    int item;
    for (i = 1; i <= length - 1; i++) {
        // ulozeni prvku
        item = list[i];
        j = i - 1;
        while ((j >= 0) && (list[j] > item)) {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = item;
    }
}

int main() {

    int n = askHowMany();
    int list[n];
    
    loadNumbers(n, list);
    insertionSort(list, count(list));
    printList(n, list);

    pause();
}