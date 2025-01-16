/* To Print diagonally pyramid structure

*
**
***
   *
   **
   ***
      *
      **
      ***

*/


#include<iostream>
using namespace std;

void pattern(int n){
 for(int t=0; t<n; t++){
    for(int i=0; i<n; i++){
        for(int sp=0; sp<n*t ; sp++){
            cout<<" ";
        }
      for(int j=0; j<=i; j++){
        cout<<"*";
      }
      cout<< endl;
    }
 }

}

int main()
{
    int n;
    cout<<"Enter no of rows per pyramid:";
    cin>>n;
    pattern(n);
    return 0;
}