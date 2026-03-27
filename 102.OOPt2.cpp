#include <iostream>
#include <string>
using namespace std;

class Senzor 
{
public:
    string typ;

    // KONSTRUKTOR - volá se při 'new' nebo vytvoření s1
    Senzor(string t) 
    {
        typ = t;
        cout << " Senzor " << typ << " se prave probudil." << endl;
    }

    // DESTRUKTOR - volá se při 'delete' nebo na konci 'main' u s1
    ~Senzor() 
    {
        cout << " Senzor " << typ << " se prave destrukcí vypnul." << endl;
    }
};


int main()
{
  Senzor s1("Teplomer");
  Senzor* s2 = new Senzor("Tlakomer");

  
  delete s2;
  cout << "provedeno delete" <<endl;
  return 0;
}