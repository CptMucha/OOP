#include <iostream>
#include <string>
using namespace std;

class Kniha
{
  public:
  string nazev; string autor; int rokVydani;
  
  void konstruktor(string n, string a, int rV)
  {
    nazev = n;
    autor = a;
    rokVydani = rV;
  }
  
  void vypis()
  {
    cout << "Kniha " <<nazev << " je od " << autor << " a vyšla v roce " << rokVydani <<endl;
  }
};

class Auto 
{
  public:
  string znacka; int rychlost;
  
  Auto(string z, int r)
  {
    znacka = z;
    rychlost = r;
  }
  
  void jet()
  {
    cout << znacka <<" jede rychlostí " << rychlost << "km/h." << endl;
  }
  
};

int main()
{
  Kniha kn1, kn2;
  kn1.konstruktor("Hamlet", "Shakespeare", 1616);
  kn1.vypis ();
  
  kn2.konstruktor("Zaklínač", "Andrzej Sapkowski", 1992);
  kn2.vypis();

  Auto *a1 = new Auto ("Tesla", 100);
  a1 ->jet();
  delete a1;
  
  return 0;
}
