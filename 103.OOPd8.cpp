#include <iostream>
#include <string>
using namespace std;

class Senzor 
{
protected:
    string typ;
public:
    Senzor(string typ) : typ(typ) {}
    void identifikuj() 
    {
        cout << "Senzor: " << typ << endl;
    }
};

class Jednotka // Abstraktni predek Jednotka
{
  protected:
  string jmeno;
  public:
  Jednotka(string jmeno) : jmeno(jmeno) {} // Musime pridat konstruktor pro jmeno, aby ho potomci mohli volat
  virtual ~Jednotka() 
  { 
    cout << "Jednotka " << jmeno << " odstranena z pameti." << endl; 
  }
  virtual void bojuj() = 0; // ciste virtualni metoda (dela z tridy "abstraktni tridu")
};

class Pruzkumnik : public Jednotka 
{
  private: 
  Senzor* detektor;
  public:
  Pruzkumnik(string jmeno) : Jednotka(jmeno) 
  {
    detektor = new Senzor("Radar");
  }
  ~Pruzkumnik() 
  {
    delete detektor;
    cout << "Pruzkumnikuv senzor byl znicen." << endl;
    }

    void bojuj() override  // override rika, ze se prepisuje
    {
        cout << jmeno << " nebojuje, ale skenuje okoli: ";
        detektor->identifikuj();
    }
};

class VrhacGranatu : public Jednotka 
{
public:
    VrhacGranatu(string jmeno) : Jednotka(jmeno) {}
    void bojuj() override 
    {
        cout << jmeno << " haze granat! " << endl;
    }
};

int main() 
{
    const int velikost = 2;
    Jednotka* armada[velikost]; // Pole ukazatelu na predka

    armada[0] = new Pruzkumnik("Adam");
    armada[1] = new VrhacGranatu("Norbert");

    for(int i = 0; i < velikost; i++) 
    {
        armada[i]->bojuj(); // Polymorfismus
    }

    for(int i = 0; i < velikost; i++) 
    {
        delete armada[i]; // Tady se diky virtual ~Jednotka zavolaji spravne destruktory
    }
    return 0;
}