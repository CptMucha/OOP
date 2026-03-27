#include <iostream>
using namespace std;

class Obdelnik 
{
    int s, v;
    public:

    Obdelnik(int s, int v) 
    {
        this->s = s;
        this->v = v;
    }
        void vypocitejObsah()
    {
        cout << "Plocha: " << (s * v) << endl;
    }
};

int main() 
{
  Obdelnik o(10, 20);
  o.vypocitejObsah();
  return 0;
}