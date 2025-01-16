/* To print Butterfly of stars...
*          *
**        **
***      ***
****    ****
*****  *****
************
************
*****  *****
****    ****
***      ***
**        **
*          *    */

#include<iostream>
using namespace std;

int pattern(int n){
    for (int i = 1; i<=n; i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for (int j = 1; j<=space; j++){
            cout<<" ";
        }
        for(int j = 1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for (int j = 1; j<=space; j++){
            cout<<" ";

        }
        for (int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
int main(){
     int n;
    cout<< "enter no of rows(lines): ";
    cin>>n;
    pattern(n);
    return 0;
}