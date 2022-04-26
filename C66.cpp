#include <iostream>
#include <iomanip>

#include "pause.c"

using namespace std;

class Zdravice {

    private:
    string textPozdravu;

    public:
    void nastavPozdrav(string text) {
        textPozdravu = text;
    }

    string pozdrav(string jmeno) {
        // cout << text << jmeno;
        return textPozdravu + " " + jmeno + "!\n";
    }
};

int main() {
    
    Zdravice zdravice;

    zdravice.nastavPozdrav("Ahoj");
    cout << zdravice.pozdrav("Petre");
    cout << zdravice.pozdrav("Karle");

    zdravice.nastavPozdrav("Ahoj programatori");
    cout << zdravice.pozdrav("Karle");
    cout << zdravice.pozdrav("Petre");

    pause();
}