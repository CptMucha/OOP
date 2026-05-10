#include <iostream>
using namespace std;

class Motor
{
private:
int vykon;
string typPaliva;

public:
Motor (int vykon, string typPaliva)
{
this->vykon = vykon;
this->typPaliva = typPaliva;
}
void start()
{
cout << "Motor s vykonem " << vykon << " koni nastartoval" << endl;
}
};

class Auto
{
private:
string znacka;
Motor mojeInstanceMotoru;
public:
Auto (string znacka, Motor m) : mojeInstanceMotoru(m)
{
this->znacka = znacka;
}
void jed()
{
cout << "auto " << znacka << " jede" << endl;
mojeInstanceMotoru.start();;
}
};

int main()
{
Motor m1(150, "Diesel");
Auto a1("Skoda", m1);
a1.jed();
return 0;
}