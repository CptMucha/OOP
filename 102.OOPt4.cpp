#include <iostream>
#include <string>
using namespace std;


class Banka
{
  private: 
  double zustatek =0; string majitel;
  
  public:
  
  Banka (double z, string m)
  {
    majitel = m;
    zustatek = z; 
  }
  
  double vklad(double &castka)
  {
   if(castka < 0)
   {
     cout << "vklad musí byt plusovy" << endl;
     return 1;
   }
   zustatek += castka;
   return zustatek;
  }
  
  void vypis()
  {
    cout << "Majitel uctu je "<< majitel << ", na účtu má "<< zustatek << endl;
  }
  
  string zmenJmeno(string &noveJmeno) 
  {
    majitel = noveJmeno; 
    return majitel;
  }
  
  void vypis2()
  {
    cout << "Novy majitel uctu je "<< majitel << ", na účtu má "<< zustatek << endl;
  }

};


int main()
{
  double castka = 100;
  Banka u1(1000, "Peta");
  u1.vklad(castka);
  u1.vypis();
  
  string noveJmeno= "Katka";
  u1.zmenJmeno(noveJmeno);
  u1.vypis2();
  return 0;
}