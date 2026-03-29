#include <iostream>
using namespace std;

class Kalkulacka
{
  private: 
  double posledniVysledek;
  public:
  
  Kalkulacka () //konstruktor
  {
  posledniVysledek = 0;
  }
  
  double secti(double a, double b); //deklarace
  void vypisPosledni(); //deklarace

};

double Kalkulacka::secti(double a, double b) //definice
{
  posledniVysledek = a + b;
    return posledniVysledek;
}

void Kalkulacka::vypisPosledni() //definice
{
  cout << posledniVysledek<< endl;
}

int main ()
{
    Kalkulacka s1;
    s1.secti(5.5, 10.2);
    s1.vypisPosledni();
    return 0;
}