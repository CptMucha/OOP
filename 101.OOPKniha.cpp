#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Kniha
{
private:
    string nazev;
    int pocetstran;

public:
    void Prirad(string nazev, int pocetstran)
    {
        this->nazev = nazev;
        this->pocetstran = pocetstran;
    }

    int getPocetStran()
    {
        return pocetstran;
    }
};

int main()
{


    vector<Kniha> knihovna;
    Kniha k1, k2, k3;
    k1.Prirad("Shakespeare", 110);
    k2.Prirad("Orwell", 210);
    k3.Prirad("Kafka", 100);
    
    knihovna.push_back(k1);
    knihovna.push_back(k2);
    knihovna.push_back(k3);

    int pocetstran = 0;
    for (auto k : knihovna)
    {
        pocetstran += k.getPocetStran();
    }
    cout << pocetstran << endl;

    return 0;
}
