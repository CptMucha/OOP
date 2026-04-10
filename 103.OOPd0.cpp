#include <iostream>
#include <string>
using namespace std;

class Zviratko 
{
protected: // Vidí to jen rodina
    string jmeno;

public:
    Zviratko(string n) : jmeno(n) {}
    
    void dychat() 
    {
        cout << jmeno << " dycha..." << endl;
    }
};

class Pes : public Zviratko // Potomek (Derived Class)
{
public:
    // Musíme zavolat konstruktor předka!
    Pes(string n) : Zviratko(n) 
    {
      
    }

    void stekat() 
    {
        cout << jmeno << " steka: Haf haf!" << endl;
    }
};

int main() 
{
    Pes mujPes("Alik");
    mujPes.dychat(); // Zděděno od předka
    mujPes.stekat(); // Vlastní metoda potomka
    return 0;
}