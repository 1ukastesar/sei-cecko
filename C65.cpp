#include <iostream>
#include <iomanip>

#include "pause.c"

using namespace std;

class Zlomek {

    private:
    

    public:
    int Citatel;
    int Jmenovatel;

    Zlomek() {
        Citatel = 2;
        Jmenovatel = 6;
    }
    Zlomek(int c) {
        Citatel = c;
        Jmenovatel = 2;
    }

    Zlomek(int c, int j) {
        Citatel = c;
        Jmenovatel = j;
    }
};

int main() {
    
    char slash[] = " / ";

    Zlomek z1;
    Zlomek z2(5);
    Zlomek z3(4, 9);

    cout << z1.Citatel << slash << z1.Jmenovatel << endl;
    cout << z2.Citatel << slash << z2.Jmenovatel << endl;
    cout << z3.Citatel << slash << z3.Jmenovatel << endl;

    pause();
}