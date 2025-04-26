#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
  system("cls");
  int arr[10],i;
  for(i=0; i<10;i++ ){
    cout<<"Enter a value ";
    cin>>arr[i];
  }
  cout<<"In reverse oder";

  for(i=9;i>=0;i--){
    cout<<arr[i]<<endl;

  }
  int sum =0;
  for(int j=0;j<10;j++){
    sum =sum + arr[j];
  }
  cout <<"sum of array is"<<sum;
  cout <<"avg of array is"<<sum/10;

}
