#include <iostream>
#include <iomanip>

#include "pause.c"

using namespace std;

class Vozidlo {

    private:
    int pocetKol;
    float maxRychlost;

    public:
    Vozidlo(int k, float r) {
        pocetKol = k;
        maxRychlost = r;
    }

    int getPocetKol() {
        return pocetKol;
    }

    float getMaxRychlost() {
        return maxRychlost;
    }
};

int main() {

    int k;
    float r;

    char k_r[] = " (k, r) = ";
    
    cout << "Zadejte atributy 3 vozidel: " << endl;

    cout << "Trabant:" << k_r;
    cin >> k;
    cin >> r;
    Vozidlo trabant(k, r);

    cout << "Ferrari:" << k_r;
    cin >> k;
    cin >> r;
    Vozidlo ferrari(k, r);

    cout << "Bicykl: " << k_r;
    cin >> k;
    cin >> r;
    Vozidlo bicykl(k, r);

    cout << endl;
    cout << "Vozidlo | Pocet kol\t| Maximalni rychlost" << endl;
    cout << "Trabant | " << trabant.getPocetKol() << "\t\t| " << trabant.getMaxRychlost() << endl;
    cout << "Ferrari | " << ferrari.getPocetKol() << "\t\t| " << ferrari.getMaxRychlost() << endl;
    cout << "Bicykl  | " <<  bicykl.getPocetKol() << "\t\t| " <<  bicykl.getMaxRychlost() << endl;

    pause();
}