#include <iostream>
#include <iomanip>

#include "pause.c"

using namespace std;

class Zdravice {

    private:
    string text = "Ahoj, ";

    public:
    void pozdrav(string jmeno) {
        cout << text << jmeno;
    }
};

int main() {
    
    Zdravice zdravice;
    zdravice.pozdrav("Petre");

    pause();
}