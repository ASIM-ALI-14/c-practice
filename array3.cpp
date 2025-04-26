#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
  system("cls");
  int arr[]={12,12,12,3,24,4};
  int arr1[]={12,34,34,2,3,2};
  int arr3[6];
  for(int i = 0;i<6;i++){
 arr3[i]=arr[i]+arr1[i];
  }
  cout<<"[";
  for(int j :arr3){
    cout<< j<< ",";
  }
  cout<<"]";
}
