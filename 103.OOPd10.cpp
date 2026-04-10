#include <iostream>
#include <string>
using namespace std;

class Host 
{
protected:
    string jmeno;
public:
    Host(string jmeno) : jmeno(jmeno) {}
    virtual ~Host() {}
    virtual void bavSe() 
    {
        cout << jmeno << " se nudi v koute" << endl;
    }
};

class Tanecnik : public Host 
{
public:
    Tanecnik(string jmeno) : Host(jmeno) {}

    void bavSe() override 
    {
        cout << jmeno << " tanci valcik" << endl;
    }
};


class Pijan : public Host 
{
  private:
  int pocetsklenic;
  public:
  Pijan(string jmeno) : Host(jmeno) 
  {
    this->pocetsklenic = 0;
  }
  void bavSe() override 
  {
    pocetsklenic++; 
    cout << jmeno << " pije sklenici cislo " << pocetsklenic << endl;
    }
};

int main() 
{
  Host* party[3];
  party[0] = new Tanecnik("Karolina");
  party[1] = new Tanecnik("Julie");
  party[2] = new Pijan("Karel");
  cout << "--- PRVNI KOLO ZABAVY ---" << endl;
  for(int i = 0; i < 3; i++) 
  {
   party[i]->bavSe();
  }
  cout << "--- DRUHE KOLO ZABAVY ---" << endl;
  for(int i = 0; i < 3; i++) 
  {
    party[i]->bavSe();
  }
  for(int i = 0; i < 3; i++) 
  {
    delete party[i];
  }
  return 0;
}


