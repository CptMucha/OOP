#include <iostream>
#include <string>
using namespace std;

class Cisarovna
{
 protected: 
 string jmeno;
 public:
 Cisarovna(string jmeno)
 {
   this->jmeno = jmeno;
 }
 virtual void pozdrav() 
 {
   cout << "Cisarovna " << jmeno << " kyve lidu." <<endl;
 }
 //virtual
  void bojuj()
 {
   cout <<"Cisarovna " << jmeno << " vydava rozkaz k boji." <<endl;
 }
};

class Rytir : public Cisarovna 
{
  public:
  Rytir (string jmeno) : Cisarovna (jmeno)
  {
    
  }
   void pozdrav()
  {
    cout << "Rytir " <<jmeno << " smeka prilbu." <<endl;
  }
  void bojuj()
  {
    cout << "Rytir "<< jmeno << " tasi mec a utoci!" <<endl;
  }
};

int main() 
{
  Cisarovna* osoba1 = new Rytir("Artus");// Vytvoříme rytire, ale budeme na nej koukat jako na cisarovnu (ukazatel předka)
  
  osoba1->pozdrav(); //je vytvoreny rytir
  osoba1->bojuj();
  
  Cisarovna* osoba2 = new Cisarovna("Karolina");
  osoba2->pozdrav();
  osoba2->bojuj();
  
  Rytir* osoba3 = new Rytir("Lancelot");
  osoba3->pozdrav();
  osoba3->bojuj();
  
  //Rytir* osoba4 = new Cisarovna("Julie"); NEJDE

  delete osoba1;
  delete osoba2;
  delete osoba3;
  return 0;
}