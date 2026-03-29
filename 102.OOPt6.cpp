#include <iostream>
using namespace std;

class Robot
{
 private:
  string jmeno;
  public:
    
    Robot(string jmeno);
    void pozdrav(string jmeno);
};

Robot::Robot(string jmeno) 
{
    this ->jmeno = jmeno;
}

void Robot::pozdrav(string jmeno) 
{
    cout << this->jmeno << endl;
}

int main ()
{
  Robot r1("Julie"); //posle do robota
  r1.pozdrav("Julie"); //vypisee pouze v pozdravu

  return 0;
}