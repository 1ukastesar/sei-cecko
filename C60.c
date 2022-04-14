#include<stdio.h>
#include<stdlib.h>

#include "pause.c"
#include "list.c"

int sequentialSearch(int needle, int * haystack, int length) {

    for(int i = 0; i < length; i++) {
        if(needle == haystack[i]) {
            return i;
        }
    }

    return -1;
}

int main() {
    
    int pattern;

    printf("V = ");
    scanf("%i", &pattern);

    int n = askHowMany();
    int list[n];
    
    loadNumbers(n, list);
    int found = sequentialSearch(pattern, list, count(list));

    if(found > -1) {
        printf("Prvek nalezen na %i. pozici (index %i).", found + 1, found);
    } else {
        printf("Prvek nenalezen.");
    }

    pause();
}