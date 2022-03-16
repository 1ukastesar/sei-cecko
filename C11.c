#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {
    
    int vzor,vyskyt=0,n=1,i=0;

    printf("Zadejte radu cisel zacinajici vzorem, ktery se ma hledat: \n");
    scanf("%i",&vzor);

    printf("\n");

    while(n!=0) {
        i++;
        scanf("%i",&n);
        
        if(n==0)
            break;
            
        if(n==vzor) {
            vyskyt++;
            printf("Vyskyt vzoru na pozici: %i\n",i);
        }
        
    }

    if(vyskyt!=0) {
        printf("Celkovy pocet vyskytu: %i",vyskyt);
    }

    pause();
}