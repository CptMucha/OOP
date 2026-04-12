
#include <iostream>

#include <iostream>
#include <string>
using namespace std;

class Postava
{
protected:
	string jmeno;
	int zivoty;
private:
	static int celkovyPocetPostav;

public:
	Postava(int zivoty, string jmeno)
	{
		this->zivoty = zivoty;
		this->jmeno = jmeno;
		celkovyPocetPostav++;

	}
	static int getPocet()
	{
		return celkovyPocetPostav;

	}

	void setZivoty(int z)
	{
		if (z >=0)
		{
			zivoty= z;

		}
		else
		{
			cout << "chyba" << endl;

		}

	}
	virtual ~Postava()
	{
		celkovyPocetPostav--;

	}
};

class Vojak : public Postava
{
public:
	Vojak (int zivoty, string jmeno): Postava(zivoty,jmeno)
	{


	}
};

int Postava::celkovyPocetPostav = 0;

int main()
{
	Vojak *v1 = new Vojak(100, "Adam");
	Vojak *v2 = new Vojak(100, "Jakub");
	cout << Postava::getPocet()<< endl;

	delete v1;
	delete v2;
	cout << Postava::getPocet()<< endl;
	return 0;
}