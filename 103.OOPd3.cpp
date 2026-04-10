#include <iostream>
#include <string>
using namespace std;

class Senzor
{
  protected: 
  string typ;
  public:
  
  Senzor (string typ)
  {
    this->typ = typ;
  }
  void identifikuj()
  {
    cout << "Toto je senzor typu: " << typ <<endl;
  }
};

class TeplotniSenzor : public Senzor
{
  private: 
  double teplota;
  public:
  TeplotniSenzor(double teplota, string typ) :Senzor (typ)
  {
    this ->teplota = teplota;
  }
  void ctiHodnotu()
  {
    cout << "Aktualni teplota:" <<teplota << " stupnu." <<endl;
  }
};

class VlhkostniSenzor : public Senzor
{
  private: 
  int vlhkost;
  public:
  VlhkostniSenzor(int vlhkost) : Senzor("Vlhkostni")
  {
    this->vlhkost = vlhkost;
  }
  void ctiHodnotu()
  {
    cout << "Vlhkost vzduchu: " << vlhkost << "%" << endl;
  }
};

int main() 
{
 TeplotniSenzor* s1 = new TeplotniSenzor(25, "TeplotniSenzor");
 s1->identifikuj();
 s1-> ctiHodnotu();
 
 VlhkostniSenzor* s2 = new VlhkostniSenzor(45);
 s2->identifikuj();
 s2->ctiHodnotu();
    
 delete s1;
 delete s2;
 return 0;
}