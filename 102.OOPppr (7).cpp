#include <iostream>
#include <string>
using namespace std;


class Motor {
private:
    int vykon;
public:
    // Tady jsi měl v kódu this->motor = motor, ale atribut se jmenuje 'vykon'
    Motor(int v) : vykon(v) {} 

    int getVykon() { return vykon; }
};

class Auto {
private:
    std::string znacka;
    Motor motor; // Tady není int, ale celá třída Motor!

public:
    // Inicializační seznam: znacka se nastaví na 'z', 
    // a objekt 'motor' se vytvoří s hodnotou 'v'
    Auto(std::string z, int v) : znacka(z), motor(v) {}

    void vypis() {
        // Abychom vypsali výkon, musíme se zeptat objektu motor
        std::cout << "Auto: " << znacka << ", Vykon: " << motor.getVykon() << "kW" << std::endl;
    }
};

int main() {
    Auto a1("Skoda", 110);
    a1.vypis();
    return 0;
}
