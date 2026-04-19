#include <iostream>
#include <string>
using namespace std;

class Obdelnik 
{
private:
    int sirka;
    int vyska;

public:
    Obdelnik(int s, int v) 
    {
        sirka = s;
        vyska = v;
    }

    int vypocitejObsah() 
    {
        return sirka * vyska;
    }

    void nastavRozmery(int s, int v) 
    {
        if (s < 0) sirka = 0;
        else sirka = s;

        if (v < 0) vyska = 0;
        else vyska = v;
    }
};

int main() 
{
    Obdelnik o1(10, 20);      // Vytvoření objektu na zásobníku
    o1.nastavRozmery(5, 8);   // Změna rozměrů
    std::cout << o1.vypocitejObsah() << std::endl; // Výpis: 40

    return 0;
}