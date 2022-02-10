#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    double a,b,c,d;

    printf("\nZadejte cleny kvadraticke rovnice ve tvaru: ax^2 + bx + c = 0:\n");

    printf("a = ");
    scanf("%lf",&a);

    printf("b = ");
    scanf("%lf",&b);

    printf("c = ");
    scanf("%lf",&c);

    printf("\n");

    d=pow(b,2)-4*a*c;

    printf("D = %.0f\n\n",d);
    
    if(d>0){
        printf("Rovnice ma dva koreny: \n");
        printf("x1 = %.0f",(-b+sqrt(d))/(2*a));
        printf("\n");
        printf("x2 = %.0f",(-b-sqrt(d))/(2*a));
    }
    else if(d==0){
        printf("Rovnice ma jeden koren: \n");
        printf("x = %.0f",(-b+sqrt(d))/(2*a));
    }
    else{
        printf("Rovnice nema reseni.");
    }

    printf("\n\n");

    system("PAUSE");
}