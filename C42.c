#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "pause.c"

#define STR_MAX_LEN 20

int main() {
    
    int max_len = 10;
    char s1[STR_MAX_LEN];
    char s2[STR_MAX_LEN];

    printf("Zadejte dva retezce o maximalni delce %i oddelene ENTERem: \n", STR_MAX_LEN);
    scanf("%s", s1);
    scanf("%s", s2);

    printf("\nRetezce ");

    if(strcmp(s1, s2) == 0) {
        printf("jsou shodne a maji delku ");
        printf("%i", strlen(s1));
    } else {
        printf("nejsou shodne a maji delku ");
        printf("%i a ", strlen(s1));
        printf("%i", strlen(s2));
    }

    printf(".");
    pause();
}