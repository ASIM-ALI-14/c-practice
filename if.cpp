#include<iostream>
#include <cstdlib>
using namespace std; 
int main(){
  int age ;
system("cls");
  cout << "Enter a Your age: ";
  cin >>age ;
  if(age>=18){
    cout <<"You are eligible for vote"<<endl;
  }
///////////////////////////////////////
int num;
cout<<"Enetr a number: ";
cin>>num;
if(num%5==0){
  cout<<"Number is dvisible by 5"<<endl;
}
//////////////////////////////////////
char ch;
cout<<"Enetr a character: ";
cin>>ch;
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
  cout<<"Character is vowel";
}


}