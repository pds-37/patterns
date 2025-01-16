/* To Print the given pattern

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5     

 */ 



#include <iostream>
using namespace std;

int sqrpattern(int n){
    
    for (int i = 0; i < 2 * n - 1; i++) 
    {
        for (int j = 0; j < 2 * n - 1; j++)
         {

            int minD = min(min(i, j), min(2 * n - 2 - i, 2 * n - 2 - j));
            cout << n - minD << " ";
        }
        cout << endl;
    }

}

int main() {
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    sqrpattern(n);
    return 0;
}
