#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  system("cls");
  struct
  {
    string name = "Asim Ali";
    int roll = 88;
    char section = 'A';
  } student_detail;
  cout << student_detail.name;
  struct ditail
  {
    string name;
    int roll;
    char section;
  };
  ditail st1;
  st1.name = "ASIM";
  st1.roll = 16;
  st1.section = 'B';
  ditail st2;
  st2.name = "ASIM ALI";
  st2.roll = 19;
  st2.section = 'A';
  cout<<st1.name<<" "<<st1.roll<<" "<<st1.section<<endl;
  cout<<st2.name<<" "<<st2.roll<<" "<<st2.section<<endl;
}