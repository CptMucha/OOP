#include <iostream>
#include <string>
using namespace std;

class Autor 
{
    string jmeno;
    int narozeni;
public:
    Autor(string j, int n) : jmeno(j), narozeni(n) {} // Inicializační seznam
    void predstaveni() const 
    {
        cout << jmeno <<  narozeni  << endl;
    }
};

class Kniha 
{
    string nazev;
    Autor* autor;
    static int pocetKnih;
public:
    // Konstruktor vytvoří autora "uvnitř" sebe
    Kniha(string n, string jmAutora, int rokAutora) : nazev(n) 
    {
        autor = new Autor(jmAutora, rokAutora);
        pocetKnih++;
    }

    ~Kniha() 
    {
        delete autor;
        pocetKnih--;
    }

    static int getPocetKnih() { 
        return pocetKnih;
    }
};

int Kniha::pocetKnih = 0;

int main() 
{
    cout << Kniha::getPocetKnih() << endl; // Vypíše 0

    Kniha* k1 = new Kniha("Hamlet", "Shakespeare", 1564);
    cout << Kniha::getPocetKnih() << endl; // Vypíše 1

    delete k1;
    cout << Kniha::getPocetKnih() << endl; // Vypíše 0

    return 0;
}