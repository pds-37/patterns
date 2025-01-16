/*  To Print hollow square of numbers

1 2 3 4 5
1       5
1       5
1       5
1 2 3 4 5 

*/

#include <iostream>
using namespace std;
int hollowsqr(int n){

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << j + 1 << " ";
            } 
            
           else 
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
int main() {
    int n;
    cout<<"Enter the size of hollow square:";
    cin>>n;
    hollowsqr(n);
    return 0;
    
}

