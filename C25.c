#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE *fw,*fr;
    char c;

    fr = fopen("files/znaky.txt", "r");
    fw = fopen("files/kopie.txt", "w");

    for(int i = 1; i <=2; i++) {
        c = getc(fr);
        putc(c,fw);
    }
    
    fclose(fr);
    fclose(fw);
    
    system("PAUSE");
}