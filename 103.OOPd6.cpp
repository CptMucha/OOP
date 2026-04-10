#include <iostream>
#include <string>
using namespace std;

class Jednotka
{
  protected: 
  string jmeno;
  public:
  Jednotka (string jmeno)
  {
    this->jmeno = jmeno;
  }
  virtual void akce()
  {
    cout << "Jednotka se pripravuje do akce" <<endl;
  }
  virtual ~Jednotka() 
  {
    
  }
};

class Vojak : public Jednotka
{
  public:
  Vojak(string jmeno) : Jednotka(jmeno) 
  {
    
  }
  virtual void akce()
  {
    cout << jmeno << " si lesti musketu "<<endl;
  }
  
};

class Vesnican : public Jednotka
{
  public:
  Vesnican(string jmeno) : Jednotka(jmeno) 
  {
    
  }
  void akce() 
  {
    cout <<jmeno << " bere do ruky vidle." <<endl;
  }
};
int main() 
{
  const int velikost =3;
    Jednotka* armada[velikost];

    armada[0] = new Vojak("Jan");
    armada[1] = new Vesnican("Pepa");
    armada[2] = new Vojak("Martin");

    for(int i = 0; i < velikost; i++) 
    {
        armada[i]->akce();
    }

    for(int i = 0; i < velikost; i++) 
    {
        delete armada[i];
    }

    return 0;
}