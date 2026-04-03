#include <iostream>
using namespace std;

class Senzor
{
  private:
  string nazev;
  
  public:
  static int pocetAktivnich;
  
  Senzor(string n)
  {
    this->nazev =n;
    pocetAktivnich++;
    cout <<pocetAktivnich << endl;
  }
  
  ~Senzor()
  {
  cout << nazev << " byl smazan" <<endl;
  pocetAktivnich--;
  cout <<pocetAktivnich << endl;
  }
  
};

int Senzor::pocetAktivnich = 0;

int main() 
{
  Senzor p1("Teplomer");
  Senzor* p2 = nullptr;
  p2 = new Senzor("Tlakomer");
  cout << "Aktivnich senzoru: " << Senzor::pocetAktivnich << endl;
  delete p2;
  cout << "Aktivnich senzoru po smazani: " << Senzor::pocetAktivnich << endl;

  return 0;
}