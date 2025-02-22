#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
  system("cls");
  string st = "Asim ali",st1;
  cout<< "Enter your full name"<<endl;
  cin>>st1;
  cout<<"this is predifine string: "<< st<<endl;
  cout<<"This is user input string: "<<st1<<endl;
//append the string
cout<<"Append the string: "<<st.append( st1)<<endl;
cout<<st<<endl;
cout<<st1<<endl;
cout<<st + st1<<endl;
//Find the Size of string
cout<<"Size of string: "<<st.size()<<endl;
cout<<"Size of string: "<<st1
.length()<<endl;
  
}
