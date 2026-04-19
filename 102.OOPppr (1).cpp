#include <iostream>
#include <string>
using namespace std;


class Zprava
{
private:
string* text;
public:

Zprava (string obsah)
{
this->text = new string(obsah);
}

~Zprava()
{
if (text != nullptr)
{
delete text;
text = nullptr;
}
}

void zobraz() const
{
cout << *text <<endl;
}
};

int main ()
{

Zprava z1("Karolina");

z1.zobraz();

return 0;
}