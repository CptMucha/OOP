#include <iostream>
using namespace std;
#include <string>

class IPostava
{
  public:
  virtual void pozdrav() = 0;
  
  virtual ~ IPostava() {}
  
};

class Kralovna : public IPostava
{
  private:
  int pocetSperku;
  public:
  
  Kralovna(int pocetSperku)
  {
    SetPocetSperku(pocetSperku);
  }
  
  int GetPocetSperku() const
  {
    return pocetSperku;
  }
  
  void SetPocetSperku(int sprk)
  {
    if(sprk < 0)
    {
      cout << "Kralovstvi je na mizine" << endl;
    }
    else
    {
      pocetSperku = sprk;
    }
  }
  
  void pozdrav() override
  {
    cout << "Královna mává lidu a má na sobě "<< pocetSperku << " šperků." << endl;
  }
};

class Vojak : public IPostava
{
  private:
  string zbran;
  public:
  
  Vojak (string zbran)
  {
    SetZbran(zbran);
  }
  string GetZbran() const
  {
    return zbran;
  }
  void SetZbran(string zbran)
  {
    this-> zbran = zbran;
  }
  
  void pozdrav() override
  {
    cout << "Voják salutuje se zbraní "<< zbran << endl;
    cout << "Čest a sláva Královně!" << endl;
  }
};

int main() 
{
  IPostava* pruvod[3];
  pruvod[0] = new Kralovna(11); 
  pruvod[1] = new Vojak("Kord");
  pruvod[2] = new Vojak("Šavle");
  
  for(int i = 0; i < 3; i++) 
  {
      pruvod[i]->pozdrav(); // Polymorfismus
  }

  for(int i = 0; i < 3; i++) 
  {
    delete pruvod[i]; // Tady se diky virtual vsichni smazou
  }
  return 0;
  }