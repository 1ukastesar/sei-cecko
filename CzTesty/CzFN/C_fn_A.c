#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int vstup(void);
float kruh(int r);
int ctverec(int a);
float rozdil(float a, float b);
void vystup(float oKruhu, int oCtverce, float rozdil);

int main() {
    
    int oCtverce, a;
    float oKruhu, c;

    a = vstup();
    oKruhu = kruh(a);
    oCtverce = ctverec(a);
    c = rozdil(oKruhu, (float)oCtverce);
    vystup(oKruhu, oCtverce, c);

    printf("\n\n");
    
    system("PAUSE");
}

int vstup(void) {
    int v;
    printf("\n");
    printf("a = ");
    scanf("%i", &v);
    return v;
}

float kruh(int r) {
    return M_PI*r*r;
}

int ctverec(int a) {
    return a*a;
}

float rozdil(float a, float b) {
    return a-b;
}

void vystup(float oKruhu, int oCtverce, float rozdil) {
    printf("\n");
    printf("Obsah kruhu: %f\n", oKruhu);
    printf("Obsah ctverce: %i\n", oCtverce);
    printf("Rozdil: %f\n", rozdil);
}