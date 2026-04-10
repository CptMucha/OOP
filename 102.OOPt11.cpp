#include <iostream>
#include <string>
using namespace std;

class Polozka
{
private:
    string jmeno;
    int cena;
    Polozka* doporuceno;
    int sleva = 5;

public:

    Polozka(string jmeno, int cena) 
    {
        this->jmeno = jmeno;
        this->cena = cena;
        this->doporuceno = nullptr;
    }
  void NastavDoporuceni(Polozka* jinaPolozka) 
  {

    this->doporuceno = jinaPolozka; 
  }

void Vypis() 
{
        cout << "Polozka: " << jmeno << " (" << cena << " Kc)";
        if (this->doporuceno != nullptr) 
        {
            cout << " -> Doporucujeme: " << this->doporuceno->jmeno;
        }
        cout << endl;
    }
    ~Polozka() 
    {
        cout << "Log: Mazu z pameti polozku " << jmeno << endl;
    }
  
    void Sleva()
    {
      cena = cena -sleva;
      cout <<"Po sleve " << jmeno << " stoji " <<cena << " Kc" << endl;
    }
    void NastavCenu(int novaCena)
    {
      this->cena = novaCena;
    }
};

int main()
{
    Polozka* chleba = new Polozka("Chleba", 30);
    Polozka* maslo = new Polozka("Maslo", 50);
    chleba->NastavDoporuceni(maslo);
    chleba->Vypis();
    maslo->Vypis();
    delete chleba;
    delete maslo;

    return 0;
}
