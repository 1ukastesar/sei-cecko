#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE *fr;
    char c;
    int chars = 0;
    int rows = 1;
    int wordcount = 0;
    int prev_was_sep = 1;

    fr = fopen("files/msbr", "r");

    // Pocet slov urcuji tak, ze kazdy znak oddelovace, ktery nasleduje po sekvenci znaku, ktere nejsou oddelovaci, se pricte jako slovo

    do {
        // Nactu tedy znak ze souboru,
        c = getc(fr);

        // zvysim pocet znaku o jedna
        chars++;

        // a pokud se jedna o novy radek ('\n'), zvysim pocet novych radku.
        if(c == '\n')
            rows++;

        switch(c) {
            // Pokud je to jakykoli oddelovac ('\t', '\n' nebo ' ')...
            case ' ':
            case '\t':
            case '\n':
            case EOF:
                // ... a nenasleduje po jinem oddelovaci...
                if(prev_was_sep != 1) {
                    // ... tak jej pocitam jako konec slova (zvysim celkovy pocet slov o jedna)
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

    // Nasledne vypisu pocet slov, novych radek a znaku
    printf("Slova: %i\n\n", wordcount);
    printf("Radky: %i", rows);
    printf("Znaky: %i", chars);

    // a provedu cistici prace (zavru soubor).
    fclose(fr);
    system("PAUSE");
}