#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  system("cls");
  int num[2][8] = {
      {1, 34, 5, 6, 4, 5, 6},
       {1, 3, 4, 6, 7, 8, 9}};
//  cout<<num[0][1]<<endl;
//  num[0][1]=100;
//   cout<<num[0][1];
    for(int i=0;i<2;i++){
        for(int j=0;j<8;j++){
      
            cout<<num[i][j]<<endl;
        }
    }

}