#include <string>

using namespace std;

class Bolt {
    string nev;
    string hely;
    mutable unsigned int osszbevetel = 0;

public:
    Bolt(const string &nev, const string &hely) : nev(nev), hely(hely) {}

    void vasarlas(unsigned int osszeg) const {
        osszbevetel += osszeg;
    }

};
