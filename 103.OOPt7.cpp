#include <iostream>
using namespace std;
#include <string>

class IPosel
{
  public:
  virtual void dorucZpravu() = 0;
  
};

class Rytir : public IPosel
{
  private:
  string jmeno;
  int unava;
  
  public:
  static int celkemDoruceno;
  Rytir(string jmeno, int unava)
  {
    this->jmeno =jmeno;
    this->unava =unava;
  }
  
  int getUnava() const
  {
    return unava;
  }
  
  void setUnava(int u) 
  {
        if (u < 0) 
        {
            unava = 0;
        } 
        else if (u > 100) 
        {
            unava = 100;
            cout << "Varovani: Rytir je na pokraji sil!" << endl;
        }
        else 
        {
            unava = u;
        }
  }
  
  void dorucZpravu() override
  {
    cout << jmeno << " Veze zpravu" << endl;
    celkemDoruceno++;
    setUnava(unava + 10);
  }
};

int Rytir::celkemDoruceno = 0;

int main() 
{
    Rytir *r1 = new Rytir("Adam", 10);
    cout << r1->getUnava() << endl;
    r1->setUnava(-50);
    cout << r1->getUnava() << endl;
    r1->dorucZpravu();
    
    cout <<"Celkem dorucenych zprav: "<< Rytir::celkemDoruceno << endl;
    delete r1;
    return 0;
}