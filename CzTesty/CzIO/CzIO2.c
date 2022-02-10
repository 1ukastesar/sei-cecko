#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE *fr;
    char c;
    int a = 0,
        e = 0,
        i = 0,
        o = 0,
        u = 0,
        y = 0;
    
    fr = fopen("a.txt", "r");

    do {
        c = getc(fr);
        
        switch(c) {
            case 'a':
            case 'A':
                a++;
                break;
            case 'e':
            case 'E':
                e++;
                break;
            case 'i':
            case 'I':
                i++;
                break;
            case 'o':
            case 'O':
                o++;
                break;
            case 'u':
            case 'U':
                u++;
                break;
            case 'y':
            case 'Y':
                y++;
                break;
        }
    } while(c != EOF);

    printf("a, A: %i\n", a);
    printf("e, E: %i\n", e);
    printf("i, I: %i\n", i);
    printf("o, O: %i\n", o);
    printf("u, U: %i\n", u);
    printf("y, Y: %i\n", y);

    printf("\n");

    fclose(fr);
    system("PAUSE");
}