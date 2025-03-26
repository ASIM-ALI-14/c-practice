#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
  system("cls");
  string name = "Asim Ali";
  string &re = name;
  cout<<re;
  cout<<name<<endl;
  cout<<&re<<endl;
  cout<<&name;
}