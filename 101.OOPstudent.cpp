#include <iostream>
#include <string>
using namespace std;

class Student
{
  private: 
  string jmeno;
  int znamka;
  
  public:
  
  void nastav(string j, int z)
  {
    jmeno = j;
    znamka = z;
  }
  void rekniZnamku()
  {
    cout << "Student " << jmeno << " ma znamku " << znamka << endl;
  }
  
  int dejZnamku() 
  {
        return znamka;
    }

    string dejJmeno() 
    {
        return jmeno;
    }
};

void porovnejStudenty(Student &s1, Student &s2) 
{
    if (s1.dejZnamku() < s2.dejZnamku()) 
    {
        cout << "Lepsi znamku ma: " << s1.dejJmeno() << endl;
    }
    else if (s2.dejZnamku() < s1.dejZnamku()) 
    {
        cout << "Lepsi znamku ma: " << s2.dejJmeno() << endl;
    } 
    else 
    {
        cout << "Oba maji stejnou znamku." << endl;
    }
}

int main() 
{
  Student studentA;
  Student studentB;

  studentA.nastav("Adam", 2);
  studentB.nastav("Petr", 3);
  porovnejStudenty(studentA, studentB);

  return 0;
}