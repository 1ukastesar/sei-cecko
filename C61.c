#include<stdio.h>
#include<stdlib.h>

#include "pause.c"
#include "list.c"

int binarySearch(int needle, int * haystack, int length) {
    int half;
    int L, R;
    
    L = 0;
    R = length - 1;

    while((L <= R)) {
        half = (L + R) / 2;
        if(needle == haystack[half])
            return half;
        else if(needle > haystack[half])
            L = half + 1;
        else
            R = half - 1;
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
    int found = binarySearch(pattern, list, count(list));
    
    if(found > -1) {
        printf("Prvek nalezen na %i. pozici (index %i).", found + 1, found);
    } else {
        printf("Prvek nenalezen.");
    }
    
    pause();
}