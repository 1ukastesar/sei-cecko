#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "pause.c"

#define RESULT_MAX_LEN 30

int main() {

    char result[RESULT_MAX_LEN];
    
    char s1[] = "Maturita ",
         s2[] = "uz se ",
         s3[] = "blizi!";

    strcat(result, s1);
    strcat(result, s2);
    strcat(result, s3);

    printf("%s", result);

    pause();
}