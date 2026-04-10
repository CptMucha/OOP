#include <iostream>
#include <string>
using namespace std;

class Person
{
  private:
  string jmeno;
  public:
  Person (string jmeno)
  {
  this->jmeno = jmeno;
  }
  ~Person()
  {
    cout <<"Smazano " << jmeno <<endl;
  }
  void PredstaveniSe()
  {
    cout << "Mé jméno je: " <<jmeno << endl;
  }
};

class Robot
{
  public:
  
  static void sayHello()
  {
    cout << "Beep boop" <<endl;
  }
  
  void sayHello2 ()
  {
    cout << "Čest a sláva" <<endl;
  }
  string name;
  void setName(string n)
  {
    name = n;
  }

  void printName()
  {
    cout << "Jméno robota: " << name << endl;
  }
};

class Math
{
  public:
  int a, b;

  Math(int a, int b) 
  {
    this->a = a;
    this->b = b;
  }

  int add()
  {
    return a + b;
  }
};

class Sensor
{
  public:
  string value;
  void setValue(string v)
  {
    value = v;
  }
};

  void increase(int& x)
  {
    x ++;
    cout << "Zvyseno o 1 " <<x << endl;
  }
  
int main() 
{
  cout << "Na OOP jsem tupy" <<endl;
  Person p1("Karolina");
    
  Robot::sayHello();
  Robot* r0 = new Robot();
  r0->sayHello2();
  Robot* robots = new Robot[3];
  robots[0].setName("R2D2");
  robots[1].setName("C3PO");
  robots[2].setName("T-800");
  for(int i = 0; i < 3; i++)
  {
    robots[i].printName();
  }
 delete[] robots;

  Math m1(10,20);
  cout << "Soucet: " <<m1.add() << endl;
  Person* p2 = new Person("Julie");
  p2->PredstaveniSe();
    
  Person *p3;
  p3 = new Person("Marie");
  
  if (p2 != nullptr)
  {
  cout << "Existuje" << endl;
  }

  int x = 100;
  increase(x);
  
  int c = 51;
  int* tt = &c;
  int t2 = 61;
  cout << *tt <<endl;
  
  int xx = 10;
  int* pz = &xx;
  int** ppp = &pz;
  cout << "Pointer na pointer"<< **ppp <<endl;
  
  cout<<"Adresa " << &c << endl;
  cout <<"Hodnota " << *tt << endl;
    delete p2;
    delete p3;
    delete r0;
    return 0;
}