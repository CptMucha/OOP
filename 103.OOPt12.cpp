#include <iostream>
#include <string>
using namespace std;

class Letec
{
  public:
  void let() 
  {
    cout << "Letim vysoko..." << endl; 
  }
  
};

class ChrliceOhne
{
  public:
  void ChrlimOhen()
  {
    cout << "Chrlim ohen!" << endl;
  }
  
};

class Drak: public Letec, public ChrliceOhne
{
  public:
  void Zpev()
  {
    cout << "Jdu spat" << endl;
  }
};

int main()
{
  Drak d1;
  d1.ChrlimOhen();
  d1.let();
  d1.Zpev();
  return 0;
}