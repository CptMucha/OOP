#include <iostream>
using namespace std;

class Trezor
{
  private:
  int kod;
  double penize;
  public:
    Trezor(int k) 
    {
        kod = k;
        penize = 0;
    }
  
  void Vlozit(double castka)
  {
    penize +=  castka;
  }

  double Vybrat(int zadanyKod, double castka)
  {
  if (zadanyKod == kod)
  {
    penize -= castka;
    cout << "Vyber uspesny" << endl;
    return penize;
  }
  cout << "SPatny pin" << endl;
  return 1;

  }

};

int main() 
{
    Trezor trezor(1234);
    trezor.Vlozit(500.50);
    trezor.Vybrat(1111, 200);
    trezor.Vybrat(1234, 200);
    return 0;
}
