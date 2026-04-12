#include <iostream>
#include <string>
using namespace std;

class KralovskaLinie
{
  private:
  string titul;
  int zivoty;
  public:
  KralovskaLinie(string t, int z)
  {
    SetZivoty(z);
    titul = t;
  }
  
  int getZivoty() const
  {
    return zivoty;
  }
  
  void SetZivoty(int z)
  {
    if(z >= 0)
    {
      zivoty =z;
      cout << "Probehla zmena na " <<getZivoty() << endl;
    }
    else
    {
      zivoty =0;
      cout << "Chyba" << endl;
    }
  }
};

int main() 
{
  KralovskaLinie k1("Kralovna", 100);
  k1.SetZivoty(101);
  k1.SetZivoty(k1.getZivoty() + 150);
  return 0;
}