#include <iostream>
#include <string>
using namespace std;

class Osoba 
{
private:
    string jmeno;
    int vek;

public:
    // Konstruktor
    Osoba(string j, int v) 
    {
        jmeno = j;
        setVek(v); // Zavoláme setter, aby zkontroloval platnost i při vytváření
    }
    // Setter (zde provádíme logiku)
    void setVek(int v) 
    {
        if (v >= 0) 
        {
            vek = v;
        } 
        else 
        {
            vek = 0; // Nastavíme nějakou bezpečnou výchozí hodnotu
            cout << "Chyba: Vek nemuze byt zaporny, nastaveno na 0." << endl;
        }
    }

    // Getter
    int getVek() const { return vek; }
};

int main() 
{
    Osoba o1("Karolina",-10);
    o1.setVek(25);
    cout << "Vek osoby je: " << o1.getVek() << endl;
    return 0;
}