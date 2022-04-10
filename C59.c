#include<stdio.h>
#include<stdlib.h>

#include "pause.c"
#include "list.c"

// preusporada pole na prvky mensi nez pivot, pivot a prvky vetsi nez pivot
int divide(int * list, int left, int right, int pivot) {

    int temp;
    int i, j;
    temp = list[pivot]; // prohozeni pivotu s poslednim prvkem
    list[pivot] = list[right];
    list[right] = temp;
    i = left;
    for (j = left; j < right; j++) {
        if (list[j] < list[right]) { // prvek je mensi, nez pivot
            temp = list[i]; // prohozeni pivotu s prvkem na pozici
            list[i] = list[j];
            list[j] = temp;
            i++; // posun pozice
        }
    }
    temp = list[i]; // prohozeni pivotu zpet
    list[i] = list[right];
    list[right] = temp;
    return i; // vrati novy index pivotu
}

void quickSort(int * list, int left, int right) {
    
    int pivot, new_pivot;
    if (right >= left) { // podminka rekurze
        pivot = left; // vyber pivotu
        new_pivot = divide(list, left, right, pivot);
        // rekurzivni zavolani na obe casti pole
        quickSort(list, left, new_pivot - 1);
        quickSort(list, new_pivot + 1, right);
    }
}

int main() {

    int n = askHowMany();
    int list[n];
    
    loadNumbers(n, list);
    quickSort(list, 0, count(list) - 1);
    printList(n, list);

    pause();
}