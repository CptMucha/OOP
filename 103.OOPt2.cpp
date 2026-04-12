#include <iostream>
#include <string>
using namespace std;

class Slechtic
{
  private: 
  static int pocetSlechticu;
  string jmeno;
  public:
  Slechtic(string jmeno)
  {
    this->jmeno = jmeno;
    pocetSlechticu++;
  }
  ~Slechtic()
  {
    pocetSlechticu--;
  }
  
  static int getPocet()
  {
    return pocetSlechticu;
  }
};


int Slechtic::pocetSlechticu = 0;

int main() 
{
  
  Slechtic* p1 = new Slechtic("Tomas");
  Slechtic* p2 = new Slechtic("Petr");
  Slechtic*p3 = new Slechtic("Ondrej");
  cout << Slechtic::getPocet() << endl;
  delete p1;
  delete p2;
  delete p3;
  return 0;
}