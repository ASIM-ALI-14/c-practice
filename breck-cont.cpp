#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
  system("cls");
  for(int i=1;i<100;i++){
    if(i%5==0){
    continue;
    }
      cout<<i<<endl;
  }


for(int j=1;j<100;j++){
  if(j%9==0||j%11==0||j%12==0){
    break;;
  }
  cout<<j<<endl;
}  
}
