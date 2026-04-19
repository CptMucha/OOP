#include <iostream>
#include <string>
using namespace std;


#include <iostream>
#include <string>

class Hrac 
{
private: 
    std::string jmeno;
    int zdravi;

public: 
    Hrac(std::string jmeno, int zdravi) {
        this->jmeno = jmeno;
        this->zdravi = zdravi;
    }

    std::string getJmeno() { return jmeno; }
    int getZdravi() { return zdravi; } // Přidal jsem pro kontrolu v mainu

    void setZdravi(int novezdravi) {
        if (novezdravi < 0) {
            this->zdravi = 0;
        } else {
            this->zdravi = novezdravi;
        }
    }
};

int main() {
    Hrac h1("Aragorn", 100);
    
    h1.setZdravi(-50); // Nastaví 0 podle podmínky
    
    std::cout << "Hrac: " << h1.getJmeno() << std::endl;
    std::cout << "Zdravi: " << h1.getZdravi() << std::endl;

    return 0;
}
