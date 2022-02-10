#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int i;
    int c;

    printf("Zadejte retezec znaku: \n");

    while(c!='*') {
        c = getchar();
        switch(c) {
            case ' ':
            case '\t':
                putchar('#');
                break;
            case '*':
                break;
            default:
                putchar(c);
                break;
        }
    }

    printf("\n\n");
    
    system("PAUSE");
}