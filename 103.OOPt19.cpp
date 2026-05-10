#include <iostream>
using namespace std;
#include <string>

class Osoba
{
private:
string jmeno;
public:
Osoba (string jmeno)
{
this->jmeno = jmeno;
}

string GetJmeno() const
{
return jmeno;
}
};
class Ucet
{
private:
double zustatek;
Osoba* majitel;
public:
Ucet (double zustatek, Osoba* majitel) : majitel(majitel)
{
this->zustatek = zustatek;
}

void vloz(double castka)
{
zustatek += castka;
}

void vypis() const
{
cout << majitel->GetJmeno() << " " << zustatek << endl;
}
};

int main()
{
Osoba o1("Karolina");
Ucet *u1 = new Ucet(0, &o1);
u1->vloz(1045);
u1->vypis();

delete u1;
return 0;
}




