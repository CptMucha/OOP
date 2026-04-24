#include <iostream>
# include <string>
using namespace std;

class IZdanitelny
{
  public:
  virtual int vypocitejDan() = 0;
};

class ABSMajetek : public IZdanitelny
{
  protected:
  string majitel;
  public:
  static int celkovyMajetekVsech;
  
  ABSMajetek(string majitel)
  {
    this->majitel = majitel;
    celkovyMajetekVsech++;
  }
  
  virtual ~ABSMajetek() {}
};

int ABSMajetek::celkovyMajetekVsech = 0;

class Pozemek : public ABSMajetek
{
  private:
  int rozloha;
  public:
  Pozemek(string majitel, int rozloha) : ABSMajetek(majitel)
  {
    SetRozloha(rozloha);
  }
  
  int GetRozloha() const
  {
    return rozloha;
  }
  void SetRozloha(int rzlh)
  {
    if (rzlh < 1)
    {
      cout << "rozloha nemuze byt mensi nez 1" << endl;
    }
    else
    {
      rozloha = rzlh;
    }
  }
  
  int vypocitejDan() override
  {
    return rozloha * 10;
  }
};

class Sperk : public ABSMajetek
{
  private:
  int hodnota;
  public:
  Sperk(string majitel, int hodnota) : ABSMajetek(majitel)
  {
    SetHodnota(hodnota);
  }
  int GetHodnota() const
  {
    return hodnota;
  }
  void SetHodnota(int hdnt)
  {
    if(hdnt < 0)
    {
      cout << "Bezcenne" << endl;
    }
    else
    {
      hodnota = hdnt;
    }
  }
  int vypocitejDan() override
  {
  return hodnota / 2;
  }
};

int main() 
{
    //Majetek m("Karel");  NEJDE, PROTOZE JE ABSTRAKTNI
    Pozemek *p1 = new Pozemek("Karolina",116);
    Sperk *s1 = new Sperk("Julie", 1000099);
    cout << p1->GetRozloha() << endl;
    cout << s1->GetHodnota() << endl;
    p1->SetRozloha(117);
    s1->SetHodnota(1100000);
    cout << p1->GetRozloha() << endl;
    cout << s1->GetHodnota() << endl;
    cout << "Dan: " << p1->vypocitejDan() << endl;
    cout << "Dan: " << s1->vypocitejDan() << endl;
    cout << "Pocet veci: " <<  ABSMajetek::celkovyMajetekVsech << endl;
    
  IZdanitelny* statniKasa[2];
  statniKasa[0] = p1;
  statniKasa[1] = s1;
  
  for (int i = 0; i < 2; i++)
  {
  cout << "Dan objektu " << i << ": " << statniKasa[i]->vypocitejDan() << endl;
  }
  
  int celkovaDan = 0;
  for (int i = 0; i < 2; i++)
  {
    celkovaDan += statniKasa[i]->vypocitejDan();
  }
  cout << "Celkova dan: " << celkovaDan << endl;
  
    delete p1;
    delete s1;
    return 0;
}