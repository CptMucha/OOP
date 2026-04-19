#include <iostream>
#include <string>
using namespace std;


class Ucet
{
private:
int zustatek;
public:
Ucet(int pociatecniZustatek);
void vloz(int castka);
int getZustatek();
};

Ucet::Ucet(int pocatecniZustatek)// Ucet::Ucet(int p) : zustatek(p) { }
{
this->zustatek =pocatecniZustatek; 
}

void Ucet:: vloz(int castka)
{
zustatek = zustatek + castka;
}

int Ucet::getZustatek()
{
return zustatek;
}

int main()
{
Ucet u1(1000);
int castka = 500;
u1.vloz(castka);
cout <<u1.getZustatek();
return 0;
}
