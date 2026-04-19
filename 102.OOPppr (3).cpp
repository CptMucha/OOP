#include <iostream>
#include <string>
using namespace std;

class Adresa 
{
    string obec;
    string psc;
public:
    Adresa(string o, string p);
    void vypis() const;
};

class Firma 
{
    string nazev;
    int ico;
    Adresa* adresa;
public:
    Firma(string n, int i, string o, string p);
    ~Firma();
    void vypisInfo() const;
};

Adresa::Adresa(string o, string p) : obec(o), psc(p) {}

void Adresa::vypis() const 
{
    cout << obec  << psc << endl;
}

Firma::Firma(string n, int i, string o, string p) : nazev(n), ico(i)
{
    adresa = new Adresa(o, p); // Alokace na haldě
}

Firma::~Firma() 
{
    delete adresa;
}

void Firma::vypisInfo() const 
{
    cout << "Firma: " << nazev << ", ICO: " << ico << endl;
    cout << "Adresa: ";
    adresa->vypis();
}

int main() 
{
    Firma* f1 = new Firma("Alza", 102851565, "Praha", "17000");
    f1->vypisInfo();
    delete f1; // Volá destruktor ~Firma(), který smaže i Adresu
    return 0;
}
