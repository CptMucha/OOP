#include <iostream>
#include <string>
using namespace std;


#include <iostream>
using namespace std;

class Kalkulacka
{
private:
double a;
double b;

public:

Kalkulacka (double a, double b)
{
this->a = a;
this-> b =b;
}

double secti()
{
return a +b;
}
double vynasob()
{
return a*b;
}
};

int main ()
{
Kalkulacka k(10.5, 2.0);
cout <<k.secti()<<endl;
cout << k.vynasob()<<endl;
return 0;
}
