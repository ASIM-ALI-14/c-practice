#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
  system("cls");
  int unit;
  cout<<"Enter your units: ";
cin>>unit;
if(unit<=100){
  cout<<"Bill is: "<<unit*5<<endl;
}
else if(unit<=200){
  cout<<"Bill is: "<<unit*10<<endl;
}
else if(unit<=300){
  cout<<"Bill is "<<unit*15<<endl;
}
else{
  cout<<"Bill is: "<<unit*20<<endl;
}
}
/////////////////////////////////////
