#include <iostream>
#include <iomanip>

#include "pause.c"

using namespace std;

class Zlomek {

    private:
    int Citatel;
    int Jmenovatel;

    public:
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

   int getCitatel() {
       return Citatel;
   }

   int getJmenovatel() {
       return Jmenovatel;
   }
};

int main() {
    
    char slash[] = " / ";

    Zlomek z1;
    Zlomek z2(5);
    Zlomek z3(4, 9);

    cout << z1.getCitatel() << slash << z1.getJmenovatel() << endl;
    cout << z2.getCitatel() << slash << z2.getJmenovatel() << endl;
    cout << z3.getCitatel() << slash << z3.getJmenovatel() << endl;

    pause();
}