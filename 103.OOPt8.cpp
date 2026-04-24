#include <iostream>
using namespace std;
#include <string>

class ISenzor
{
  public:
  virtual void merit() = 0;
  
  virtual ~ISenzor( ){}
};

class TeplotniSenzor :public ISenzor
{
  private:
  double teplota;
  public:
  
  TeplotniSenzor(double teplota)
  {
    SetTeplota(teplota); //V konstruktoru muzu volat setter, a automaticky nastavim dobry limit hodnot
  }
  double GetTeplota() const
  {
    return teplota;
  }
  
void SetTeplota(double t) 
{
    if(t < -273.15) 
    {
        teplota = -273.15;
    } 
    else 
    {
        teplota = t;
    }
}
  
  void merit() override
  {
    cout << "Merim teplotu okolí " << teplota << endl;
  }
  
};

class VzdalenostniSenzor : public ISenzor
{
  private:
  int vzdalenost;
  public:
  
  VzdalenostniSenzor(int vzdalenost)
  {
    SetVzdalenost(vzdalenost); //V konstruktoru muzu volat setter, a automaticky nastavim dobry limit hodnot
  }
  
  int GetVzdalenost() const
  {
    return vzdalenost;
  }
  
  void SetVzdalenost(int v)
  {
    if (v <0)
    {
      vzdalenost = 0;
    }
    else
    {
    vzdalenost = v;
    }
  }
  
  void merit() override
  {
    cout <<  "Vysilam ultrazvuk " << vzdalenost << endl;
  }
};


int main() 
{
  TeplotniSenzor *t1 = new TeplotniSenzor(25.15);
  VzdalenostniSenzor *v1 = new VzdalenostniSenzor(115);
  t1->SetTeplota(15);
  v1->SetVzdalenost(48);
  cout << t1->GetTeplota() << endl;
  cout << v1->GetVzdalenost() << endl;
  v1->merit();
  t1->merit();
  delete t1;
  delete v1;
  return 0;
}