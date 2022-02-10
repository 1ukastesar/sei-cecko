#include<stdio.h>
#include<stdlib.h>

int main() {

    int i;
    FILE *fw;

    fw = fopen("files/pokus.txt","w");

    for(i = 1; i <= 10; i++)
        fprintf(fw, "%i\n", i);

    fclose(fw);

    system("PAUSE");
}