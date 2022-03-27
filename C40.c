#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

#define MAX_CHARS_IN_LINE 80+1

int main() {
    
    char line[MAX_CHARS_IN_LINE];

    FILE *fr;
    fr = fopen("files/dopis.dat", "r");

    while(fgets(line, MAX_CHARS_IN_LINE, fr) != NULL) {
        printf(line);
    }

    pause();
}