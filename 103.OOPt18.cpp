#include <iostream>
using namespace std;
#include<string>

class Robot
{
private:
string jmeno;
static int pocetRobotu;
public:
Robot (string jmeno)
{
this->jmeno = jmeno;
pocetRobotu++;
}

static void vypisPocet()
{
cout << pocetRobotu << endl;
}

~Robot()
{
pocetRobotu--;
cout <<pocetRobotu << endl;
}
};
int Robot::pocetRobotu =0;

int main()
{

Robot r1("R22");
Robot r2("R2D2");
Robot::vypisPocet();

return 0;
}