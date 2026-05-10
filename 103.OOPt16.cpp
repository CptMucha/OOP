#include <iostream>
#include <string>
using namespace std;

class Adresa
{
private:
string ulice;
int cislopopisne;
string mesto;

public:
    Adresa(string ulice, int cislopopisne, string mesto)
    {
        this->mesto = mesto;
        this->ulice = ulice;
        this->cislopopisne = cislopopisne;
    }

    void vypis() const
    {
        cout << ulice << " " << cislopopisne << ", " << mesto << endl;
    }
};

class Firma
{
private:
string nazev;
long ico;
Adresa sidlo;
public:
Firma(string nazev, long ico, const Adresa& sidlo) : sidlo(sidlo)
{
this->nazev = nazev;
this ->ico = ico;
}

void vypisinfo()
{
cout << nazev << ico << endl;
 sidlo.vypis();
}

};

int main()
{
    Adresa a1("Dlouha", 123, "Praha");
    Firma f1("Auto s.r.o.", 12345678, a1);
    f1.vypisinfo();
    return 0;
}
