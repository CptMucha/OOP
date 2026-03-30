#include <iostream>
#include <string>
using namespace std;

class Robot 
{
private:
    string jmeno;
    static int pocetRobotu; 

public:
    
    Robot(string j)
    {
        jmeno = j;
        pocetRobotu++;
        cout << "Robot " << jmeno << " byl vyroben." << endl;
    }

    ~Robot() 
    {
        pocetRobotu--; 
        cout << "Robot " << jmeno << " byl sesrotovan." << endl;
    }

    static void vypisPopulaci() 
    {
        cout << "Aktualne zije " << pocetRobotu << " robotu." << endl;
    }
};

int Robot::pocetRobotu = 0;

int main() 
{
    Robot::vypisPopulaci();
    Robot* r1 = new Robot("R2D2");
    Robot::vypisPopulaci();

    Robot* prazdnyRobot = nullptr;
    if (prazdnyRobot == nullptr) 
    {
        cout << "Prazdne" << endl;
    }

    delete r1;
    r1 = nullptr;
    
    Robot::vypisPopulaci();

    return 0;
}