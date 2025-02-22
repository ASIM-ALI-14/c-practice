#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
  system("cls");
  string arr[]={"Asimasdada","Aldfsfi","Ahmed","Ahsan","Adeel"};
  arr[3]="Ali";
  cout<<arr[3]<<endl;
  ///Array looping
  for(int i=0; i<5; i++){
    cout<<arr[i]<<endl;
  }
  for(string i:arr){
    cout<<i<<endl;
  }
  //size of operator
  cout<<sizeof(arr)<<endl;
  cout<<sizeof(arr[0])<<endl;
////////////////////////////////
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers)  ;
cout<<sizeof(myNumbers[0])<<endl;
cout << getArrayLength;
}