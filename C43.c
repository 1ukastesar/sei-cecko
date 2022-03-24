#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "pause.c"

#define NAME_MAX_LEN 10+1

int main() {
    
    char s1[NAME_MAX_LEN],
         s2[NAME_MAX_LEN],
         s3[NAME_MAX_LEN],
         sp[NAME_MAX_LEN];

    printf("Zadejte 1. jmeno: ");
    scanf("%s", &s1);

    printf("Zadejte 2. jmeno: ");
    scanf("%s", &s2);

    printf("Zadejte 3. jmeno: ");
    scanf("%s", &s3);

    if(strcmp(s1, s2) > 0) {
        strcpy(sp, s1);
        strcpy(s1, s2);
        strcpy(s2, sp);
    }

    if(strcmp(s2, s3) > 0) {
        strcpy(sp, s2);
        strcpy(s2, s3);
        strcpy(s3, sp);
    }

    if(strcmp(s1, s2) > 0) {
        strcpy(sp, s1);
        strcpy(s1, s2);
        strcpy(s2, sp);
    }

    printf("Jmena serazena podle ABC: \n");
    printf("%s %s %s", s1, s2, s3);

    pause();
}