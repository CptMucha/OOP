#include <iostream>
#include <string>
using namespace std;


class Prevodnik
{
public:

static double naKilometry(double metry)
{
return metry/1000;
}
static double naMetry(double kilometry)
{
return kilometry * 1000;
}

};

int main()
{
cout <<Prevodnik::naKilometry(2500) <<endl;
cout <<Prevodnik::naMetry(13) <<endl;
return 0;
}
