#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE *fw,*fr;
    char c;

    fr = fopen("files/orig.txt", "r");
    fw = fopen("files/kopie.txt", "w");

    do {
        
        c = getc(fr);
        putc(c,fw);

    } while(c != EOF);
    
    fclose(fr);
    fclose(fw);
    
    system("PAUSE");
}