#include<stdio.h>
#include<stdlib.h>

#include "pause.c"

int main() {

    int x,y,z;
    FILE *fr;
    FILE *fw;

    fr=fopen("files/datavst.dat","r");
    fw=fopen("files/datavyst.dat","w");
    fscanf(fr,"%i %i %i",&x,&y,&z);
    //scanf("%i %i %i",&x,&y,&z);
    fprintf(fw,"%i",x+y+z);
    //printf("%i\n",x+y+z);
    fclose(fr);
    fclose(fw);

    pause();
}