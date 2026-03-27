#include <iostream>
#include <string>
using namespace std;

class Polozka// Definice třídy Polozka (reprezentuje jednu položku se jménem a počtem)
{
  private:
  string nazev;
  int pocet;
  
  public:
  
  Polozka (string s, int p)// Konstruktor – inicializuje objekt (nastaví název a počet)
  {
    nazev = s;
    pocet = p;
  }
  
  int zmenPocet(int zmena)   // Funkce pro změnu počtu položek
  {
    if(pocet + zmena < 0)
    {
      cout << "Nejde aby slo do minus" << endl;
      return 1;
    }
    pocet += zmena;// Pokud je vše v pořádku, upraví počet
    return pocet;// Vrací nový počet
  }
  
  
  ~Polozka()// Destruktor – zavolá se při zániku objektu
  {
    cout << nazev << " byla smazana" << endl;
  }
  
  void upravNazev(const string &novyNazev)// Funkce pro změnu názvu (předává se referencí kvůli efektivitě)
  {
    nazev = novyNazev; 
  }
  
  void Vypis() const// Funkce pro výpis informací o položce (const = nic nemění)
  {
    cout << "Polozka " << nazev 
         << " byla pridana do seznamu v poctu " 
         << pocet << endl;
  }
};

int main()
{
  int zmena = 200;
  Polozka p1("Opasek", 501);// Vytvoření objektu na zásobníku (automatická správa paměti)
  p1.zmenPocet(zmena);// Zvýšení počtu o 200
  p1.Vypis();// Výpis informací o p1
  Polozka* p2 = new Polozka("Kelímek", 1001);// Dynamické vytvoření objektu (na haldě)
  p2->Vypis();// Přístup k objektu přes ukazatel (->)
  string novyNazev = "Kuchynsky Robot";// Změna názvu první položky
  p1.upravNazev(novyNazev);
  p1.Vypis();// Výpis po změně názvu
  delete p2;// Uvolnění paměti (nutné při použití new)

  return 0;
}