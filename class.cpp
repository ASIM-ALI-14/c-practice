#include <iostream>
#include <cstdlib>
using namespace std;
class car
{

private:
  string name;
  string color(string c)
  {
    return c;
  }

public:
  int speed;
  int fuel;
  void setname(string n)
  {
    name = n;
  };
  string getname()
  {
    return name;
  };
  car(int s,int f){
    speed=s;
    fuel=f;

  }
  void getinfo(){
     
    cout << "car speed: " << speed << endl;
    cout << "car fuel: " << fuel << endl;
  }
};
  int main()
  {
    car c1(124,45);
    c1.getinfo();
    
   

    return 0;
  }