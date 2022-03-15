#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include "pause.c"

int main(){
    int strana;
    double na2,na3;
    double us,ut;

    printf("Zadejte delku strany krychle jako prirozene cislo v cm: ");
    scanf("%i",&strana);
    printf("\n");

    na2 = pow((double) strana, 2);
    na3 = pow((double) strana, 3);
    
    us=sqrt(na2*2);
    ut=sqrt(na2+pow(us,2));

    printf("Objem: %i\n",(int) na3);
    printf("Povrch: %i\n",6*(int) na2);
    printf("Delka stenove uhlopricky: %f\n",us);
    printf("Delka telesove uhlopricky: %f\n",ut);

    pause();
}