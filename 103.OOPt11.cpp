#include <iostream>
#include <string>
using namespace std;

class RobotickySenzor
{
private:
    double surovaData;
    int typVypoctu;

public:
    RobotickySenzor(double surovaData, int typVypoctu);

    void prijmiData(double data);
    double getZpracovanaHodnota();
};

RobotickySenzor::RobotickySenzor(double surovaData, int typVypoctu)
{
    prijmiData(surovaData);
    this->typVypoctu = typVypoctu;
}


void RobotickySenzor::prijmiData(double data)
{
    if (data > 1023 || data < 0)
    {
        cout << "Spatny rozsah" << endl;
    }
    else
    {
        this->surovaData = data;
    }
}

double RobotickySenzor::getZpracovanaHodnota()
{
    if (typVypoctu == 0)
    {
        return surovaData / 10;
    }
    else
    {
        return surovaData * 0.5;
    }
}

int main()
{
    RobotickySenzor senzor(500, 0);
    cout << senzor.getZpracovanaHodnota() << endl;

    return 0;
}