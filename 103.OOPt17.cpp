#include <iostream>
using namespace std;

class Adresa
{
private:
string ulice;
string obec;
int psc;
public:
Adresa (string ulice, string obec, int psc)
{
this->ulice = ulice;
this->obec = obec;
this->psc = psc;
}
void Vypis() const
{
cout << ulice << " " << psc << " " << obec << endl;
}
};

class Firma
{
private:
string nazev; 
int ico;
Adresa adresa;
public:
Firma (string nazev, int ico, Adresa& adresa) : adresa(adresa)
{
this->nazev = nazev;
this->ico = ico;
}
void GetFirma() const
{
cout << nazev << " " << ico << " " << endl;
adresa.Vypis();
}
};

int main ()
{
Adresa a1("Vaclavskenamesti", "Praha", 11000);
Firma f1("Karolinum", 101548790, a1);
f1.GetFirma();
}