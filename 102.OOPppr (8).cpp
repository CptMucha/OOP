#include <iostream>
#include <string>
using namespace std;

class Stroj {
private:
    bool funkcni;
public:
    Stroj(bool f) : funkcni(f) {} // Jednoduchý start

    // Metoda pro změnu stavu
    void setStav(bool s) {
        funkcni = s; // Žádné ampersandy tady! Jen uložím hodnotu.
    }

    bool getStav() { return funkcni; }
};

// FUNKCE MIMO TŘÍDU
// Stroj &s  =>  "Dej mi přístup k originálu toho stroje, říkejme mu 's'"
void opravStroj(Stroj &s) {
    s.setStav(true); // Volám metodu na tom originálu
}

int main() {
    Stroj stroj1(false); // Máme rozbitý stroj

    std::cout << "Stav pred opravou: " << stroj1.getStav() << std::endl;

    // Předám stroj1 do funkce. Díky & v definici funkce se s ním pracuje přímo.
    opravStroj(stroj1); 

    std::cout << "Stav po oprave: " << stroj1.getStav() << std::endl;

    return 0;
}
