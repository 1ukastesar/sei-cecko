#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include "pause.c"
#include "list.c"

void bubbleSort(int * list, int length) {
    
    int temp;
    int i,
        j = length - 2;
    // kontrola prohozeni
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (i = 0; i <= j; i++) {
            // prohozeni
            if (list[i] > list[i + 1]) {
                temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                swapped = true;
            }
        }
        j--;
    }
}

int main() {

    int n = askHowMany();
    int list[n];
    
    loadNumbers(n, list);
    bubbleSort(list, count(list));
    printList(n, list);

    pause();
}