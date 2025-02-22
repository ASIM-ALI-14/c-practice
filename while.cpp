#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  system("cls");
  // int p= 1;
  // int j = 0;
  // while (p >0)
  // {
  //   j = j + p;
  //   p++;
  // }
  // cout << j << endl;
  
  //////////////////////////
  int num4;
  cout<<"Enetr a number for factorial: ";
  cin>>num4;
  int i = 1;
  int p = 1;
  do
  {
     p = p * i;
    i++;
  } while (i<=num4);
  cout << p << endl;
  return 0;
}