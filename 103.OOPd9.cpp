#include <iostream>
#include <string>
using namespace std;

class Operace 
{
public:
  virtual ~Operace() {}
  virtual double vypocitej(double a, double b)
  {
    return 0;
  }
};

class Soucet : public Operace
{
  public:
    double vypocitej(double a, double b) override 
    {
        return a + b;
    }
};

class Mocnina : public Operace 
{
public:

    double vypocitej(double a, double b) override
    {
        return a * a; 
    }
};

int main() 
{
  Operace* op = nullptr;
  op = new Soucet(); 
  cout <<  op->vypocitej(5, 3) << endl;
  delete op;

  op = new Mocnina(); 
  cout << op->vypocitej(5, 3) << endl;
  delete op;
  return 0;
}

