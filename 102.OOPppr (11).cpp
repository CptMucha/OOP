#include <iostream>
#include <string>
using namespace std;


class Teplomer {
private:
    double stupenCelsia;
public:
    Teplomer(double stupenCelsia) {
        this->stupenCelsia = stupenCelsia;
    }

    // "Kalkulačka" - statická metoda
    static double naFahrenheit(double celsia) {
        return (celsia * 9.0 / 5.0) + 32; // 9.0 zajistí přesnější dělení
    }

    // "Zaměstnanec" - normální metoda
    void vypisFahrenheit() {
        // TADY JE TEN MŮSTEK:
        // Vezmu svoje data a hodím je do statické kalkulačky
        double vysledek = naFahrenheit(this->stupenCelsia);
        cout << "Teplota ve F: " << vysledek << endl;
    }
};

int main() {
    Teplomer t(25.0);
    
    // 1. Volání přes objekt (využívá data uvnitř t)
    t.vypisFahrenheit(); 

    // 2. Volání přímo "kalkulačky" (musíme jí dát číslo ručně)
    double venkovniVypocet = Teplomer::naFahrenheit(30.0);
    cout << "Rucni vypocet pro 30C: " << venkovniVypocet << endl;

    return 0;
}
