#include <iostream>
#include <string>
using namespace std;

class Host
{
  public:
  string jmeno;
  
  Host(string j)
  {
    jmeno =j;
    cout << jmeno << " dosel/la na party." << endl;
  }
  
  ~Host()
  {
    cout << jmeno << " byl/a vyhozen." << endl;
  } 
};


int main()
{
  cout << "Zacatek party" << endl;
  Host a1("Adam");
  Host a2("Tomas");
  Host* a3 = new Host("Klara");
  Host* a4 = new Host("Katerina");
  Host* a5 = new Host("Karel");
  delete a5;
  cout << "Konec party" << endl;
  
  delete a3;
  cout <<"Klara byla vyhozena jako prvni, protoze je dynamicka a bylo delete" << endl;
  //Katerina zustala protoze nebyla vyhozena - memory leak

  return 0;
}
