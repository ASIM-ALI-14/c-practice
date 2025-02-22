#include<iostream>
#include<cstdlib>
#include<typeinfo>
using namespace std;
int main(){
  system("cls");
  // Data types------
  int a =12;
  char ch = 'a';
  bool bol = true;
  float flo =23.45;
  string st = "Asim Ali";
  cout <<st<<endl;
  cout<< "" << typeid(a).name()<<endl;
  cout<< "" << typeid(ch).name()<<endl;
  cout<< "" << typeid(st).name()<<endl;
  cout<< "" << typeid(flo).name()<<endl;
  cout<< "" << typeid(bol).name()<<endl;
}