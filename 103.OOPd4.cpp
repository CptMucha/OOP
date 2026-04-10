#include <iostream>
#include <string>
using namespace std;

class Vypocet
{
  public:
    void vypis(double hodnota);
};

class VypocetDPH : public Vypocet
{
  public:
    void vypis(double hodnota);
};

void Vypocet::vypis(double hodnota)
{
  cout << "Vysledek je: " << hodnota << endl;
}

void VypocetDPH::vypis(double hodnota)
{
  cout << "Vysledek s DPH: " << (hodnota * 1.21) << endl;
}

int main() 
{
  Vypocet* v1 = new Vypocet();
  VypocetDPH* v2 = new VypocetDPH();
  
  Vypocet* v = new VypocetDPH();
  v->vypis(100);
  
  v1->vypis(100);
  v2->vypis(100);

  delete v1;
  delete v2;
  delete v;
  return 0;
}