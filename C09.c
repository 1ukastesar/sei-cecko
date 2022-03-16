#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "pause.c"

int main() {
    char str[6];

    printf("Zadejte libovolny znak o delce 1 byte: ");

    switch (getchar())
    {
    case 'a':
    case 'b':
    case 'c':
        strcpy(str, "znak1");
        break;
    case 'd':
        strcpy(str, "znak2");
        break;
    default:
        strcpy(str, "znak3");
        break;
    }

    printf(str);

    pause();
}