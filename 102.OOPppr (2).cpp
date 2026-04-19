#include <iostream>
#include <string>
using namespace std;

class Spravce
{
public:
static int* data;

static void inicializuj(int hodnota)
{
if (data == nullptr)
{
data = new int(hodnota);
}
}

static void vymaz()
{
if(data !=nullptr)
{
delete data;
data = nullptr;
}
}
};

int* Spravce::data = nullptr;

int main()
{
Spravce::inicializuj(100); 
Spravce::vymaz();
return 0;
}



