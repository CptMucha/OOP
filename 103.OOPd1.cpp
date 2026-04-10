#include <iostream>
#include <string>
using namespace std;

class Tvar
{
  protected:
  string barva;
  
  public:
  
  Tvar (string barva)
  {
    this->barva = barva;
  }
  
  void vypisBarvu()
  {
    cout << "Barva je: " << barva <<endl;
  }
};

class Obdelnik : public Tvar 
{
private:
    double vyska;
    double sirka;

public:

    Obdelnik(double v, double s, string b) : Tvar(b) 
    { 
        this->vyska = v;
        this->sirka = s;
    }

    double obsah() 
    {
        return vyska * sirka;
    }
};
int main() 
{
    Tvar t1("Fialovy");
    t1.vypisBarvu();

    Obdelnik o1(5, 4, "Cerveny"); 
    o1.vypisBarvu();
    cout << "Obsah: " << o1.obsah() << endl;
    return 0;
}