#include <iostream>
using namespace std;
#include <string>

class Slechtic
{
private:
string jmeno;
string *titul;
public:
Slechtic(string jmeno, string t)
{
this->jmeno = jmeno;
titul = new string(t);
}
~Slechtic() {}

void predstavSe()
{
cout << jmeno << "  " << *titul << endl;
}

};

int main()
{
Slechtic s1("Julie", "Baronka");
s1.predstavSe();

    return 0;
}