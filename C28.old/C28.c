#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE *fr;
    char c;
    int wordcount = 0;
    int prev_was_sep = 1;

    fr = fopen("msbr", "r");

    // Pocet slov urcuji tak, ze kazdy znak oddelovace, ktery nasleduje po sekvenci znaku, ktere nejsou oddelovaci, se pricte jako slovo

    //while((c = getc(fr)) != EOF) { - tady byl problem, ze slovo bezprostredne ukoncene EOF se jiz nezapocitalo do vysledneho souctu

    do {
        // Nactu tedy znak ze souboru
        c = getc(fr);
        switch(c) {
            // Pokud se jedna o oddelovac ('\t', '\n' nebo ' ')...
            case ' ':
            case '\t':
            case '\n':
            case EOF:
                // ...a nenasleduje po jinem oddelovaci...
                if(prev_was_sep != 1) {
                    // ...tak jej pocitam jako konec slova (zvysim celkovy pocet slov o jedna)
                    wordcount++;
                    // a ulozim si informaci o tom, ze jsem ukoncil slovo (aby vice oddelovacu po sobe nemelo vliv na pocet slov).
                    prev_was_sep = 1;
                }
                break;
            // Jestlize se jedna o jakykoliv jiny znak (pravdepodobne cislo nebo pismeno),
            default:
                // tak si ulozim informaci o zacatku dalsiho slova.
                prev_was_sep = 0;
                break;
        }
    // V pripade, ze narazim na konec souboru, ukoncim cyklus.
    } while(c != EOF);

    // Nasledne vypisu pocet slov
    printf("Pocet slov: %i\n\n", wordcount);

    // a provedu cistici prace (zavru soubor).
    fclose(fr);
    system("PAUSE");
}