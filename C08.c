#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "pause.c"

int main () {
    int monthnum;
    char month[9];
    int err = 0;

    printf("Zadejte cislo mesice: ");
    scanf("%i", &monthnum);

    /*
     * Chtel jsem udrzet co nejmensi nutne opakovani kodu, aby byl program snadno upravitelny. 
     * Takze proto nejprve vytvorim retezec (char[]) a potom do nej pomoci strcopy() prirazuji retezce.
     * Pripad, kdy od uzivatele dostanu nevalidni vstup, mam osetren chybovym mechanismem.
    */

    switch (monthnum)
    {
    case 1:
        strcpy(month, "leden");
        break;
    case 2:
        strcpy(month, "unor");
        break;
    case 3:
        strcpy(month, "brezen");
        break;
    case 4:
        strcpy(month, "duben");
        break;
    case 5:
        strcpy(month, "kveten");
        break;
    case 6:
        strcpy(month, "cerven");
        break;
    case 7:
        strcpy(month, "cervenec");
        break;
    case 8:
        strcpy(month, "srpen");
        break;
    case 9:
        strcpy(month, "zari");
        break;
    case 10:
        strcpy(month, "rijen");
        break;
    case 11:
        strcpy(month, "listopad");
        break;
    case 12:
        strcpy(month, "prosinec");
        break;
    default:
        err = 1;
        break;
    }

    if (!err)
        printf("Cislo odpovida mesici %s.", month);
    else
        printf("Cislo neodpovida zadnemu mesici.");

    pause();
}