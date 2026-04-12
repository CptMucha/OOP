#include <iostream>
#include <string>
using namespace std;

class KralovskaLinie 
{
protected:
    int zivoty;

public:
    KralovskaLinie(int z) : zivoty(z) {}
    
    // Setter, který je sdílený
    void setZivoty(int z) { if(z >= 0) zivoty = z; }
    int getZivoty() const { return zivoty; }
};

class Kralovna : public KralovskaLinie 
{
public:
    Kralovna(int z) : KralovskaLinie(z) {}
    
    void lecitSe() 
    {
      zivoty += 10; 
    } 
};

int main() 
{
    KralovskaLinie linie(100);
    cout << "Pocatecni zivoty (linie): " << linie.getZivoty() << endl;
    
    linie.setZivoty(80);
    cout << "Po zmene setterem: " << linie.getZivoty() << endl;

    // linie.zivoty = 50; // ERROR - protected!

    cout << "Kralovna" << endl;

    Kralovna kralovna(120);
    cout << "Pocatecni zivoty (kralovna): " << kralovna.getZivoty() << endl;

    kralovna.lecitSe();
    cout << "Po leceni: " << kralovna.getZivoty() << endl;

    kralovna.setZivoty(200);
    cout << "Po nastaveni setterem: " << kralovna.getZivoty() << endl;

    cout << "Polymorfismus" << endl;
    KralovskaLinie* ukazatel = &kralovna;

    cout << "Zivoty pres base pointer: " << ukazatel->getZivoty() << endl;

    // ukazatel->lecitSe(); // ERROR - base class nema tuto metodu

    return 0;
}