#include <iostream>
#include <string>
using namespace std;

class Robot
{
 protected:
 string jmeno;
 public:
 Robot(string jmeno)
 {
   this->jmeno = jmeno;
 }
 void pracuj()
 {
   cout << jmeno << " dela obecne veci" <<endl;
 }
  
};

class SvarovaciRobot : public Robot
{
  private:
  int teplotaSvaru;
  public:
  SvarovaciRobot(int teplotaSvaru, string jmeno) : Robot (jmeno)
  {
    this->teplotaSvaru = teplotaSvaru;
  }
  void pracuj()
  {
    cout << jmeno << " svaruje při teplote " << teplotaSvaru << " stupnu." <<endl;
  }
  
};

int main() 
{
    Robot r1("R1");
    r1.pracuj();
    SvarovaciRobot r2(1000, "R2");
    r2.pracuj();
    return 0;
}