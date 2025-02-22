#include<iostream>
#include <cstdlib>
#include<cctype>
using namespace std;

int main(){
  char ch;
  system("cls");
  cout<<"Enter a character: ";
  cin>>ch;
  if(ch>='a'&&ch<='z'){
    cout<<"Alphabet ";
  }
  else{
    cout<<"Not an alphabet";
  }
  /////////////////////////////
    if(isalpha(ch)){
    cout<<"Alphabet ";
  }
  else{
    cout<<"Not an alphabet";
  }

  /////////////////////
  int year;
  cout<<"Enter a year: ";
  cin>>year;
  if(year%4==0){
    cout<<"Leap year";
  }
  else{
    cout<<"Not a leap year";
  }
  //////////////////////////////////
  int a,b;
  cout<<"Enter three two: ";
  cin>>a>>b;
  if(a>b&&a>b){
    cout<<a<<"is greater";
  }
  else{
    cout<<b<<"is greater";
  }
  return 0;
}