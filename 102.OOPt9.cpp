#include <iostream>
#include <string>
using namespace std;

class Student 
{
private:
    string name;
    int age;
    static int studentCount;

public:
    Student(string name, int age);// Konstruktor
    ~Student();// Destruktor

    void printInfo() const;
    void setName(string name);
    string getName() const; // Metody

    static int getStudentCount();
};

int Student::studentCount = 0;// DEFINICE STATICKÉ PROMĚNNÉ

// DEFINICE METOD

Student::Student(string name, int age) // Konstruktor
{
    this->name = name;   // použití this
    this->age = age;

    studentCount++;

    cout << "Konstruktor: Student " << this->name << " byl vytvoren.\n";
}

Student::~Student() // Destruktor
{
    cout << "Destruktor: Student " << name << " byl zrusen.\n";
    studentCount--;
}

void Student::printInfo() const // Výpis informací
{
    cout << "Jmeno: " << name << ", Vek: " << age << endl;
}

void Student::setName(string name) // Setter
{
    this->name = name;
}

string Student::getName() const // Getter
{
    return name;
}

int Student::getStudentCount() // Statická metoda
{
    return studentCount;
}

void changeName(Student &s, string newName) // FUNKCE S REFERENCÍ (&)
{
    s.setName(newName);
}

void printStudentPointer(Student *s) // FUNKCE S UKAZATELEM (*)
{
    if (s != nullptr) {
        s->printInfo(); // použití ->
    }
}

void createStudent(Student **s) // FUNKCE S DVOJITÝM UKAZATELEM (**)
{
    string name;
    int age;

    cout << "Zadej jmeno: ";
    cin >> name;

    cout << "Zadej vek: ";
    cin >> age;

    *s = new Student(name, age); // alokace přes **
}

int main() 
{
    cout << "===== VYTVARENI OBJEKTU =====" <<endl;

    Student s1("Marie", 20);// Objekt na zásobníku
    s1.printInfo();


    changeName(s1, "Karolina");// Reference (&)
    cout << "Po zmene jmena: "<<endl;
    s1.printInfo();

    cout << "===== UKAZATELE (*) ====="<<endl;

    Student *s2 = new Student("Eva", 22);// Dynamická alokace
    printStudentPointer(s2);

    cout << "===== DOUBLE POINTER (**) ====="<<endl;

    Student *s3 = nullptr; // nullptr

    createStudent(&s3); // předání adresy (pointer na pointer)

    if (s3 != nullptr) 
    {
        s3->printInfo();
    }

    cout << "===== STATIC ====="<<endl;
    cout << "Pocet studentu: " << Student::getStudentCount() << endl;

    cout << "===== DELETE =====" <<endl;

    delete s2; // uvolnění paměti
    s2 = nullptr;

    delete s3;
    s3 = nullptr;

    cout << "Po mazani: "<<endl;
    cout << "Pocet studentu: " << Student::getStudentCount() << endl;

    cout << "===== KONEC PROGRAMU =====" <<endl;

    return 0;
}