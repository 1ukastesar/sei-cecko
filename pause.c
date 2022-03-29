#include<stdio.h>
#include<stdlib.h>

void pause() {
    printf("\n\nPress ENTER to close...");
    fflush(stdin);
    getchar();
    printf("\n");
}