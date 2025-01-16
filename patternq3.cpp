/* To print pyramid pattern 


A          A
AB        BA
ABC      CBA
ABCD    DCBA
ABCDEEDCBA */  


#include <iostream>
using namespace std;

int pattern3(int n){
    for (int i = 1; i <= n; i++) {
        // Printing  the left side of the pattern
        for (int j = 0; j < i; j++) {
            cout << char('A' + j);
        }

        // Printing spaces in the middle
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }

        // Printing the right side of the pattern
        for (int j = i - 1; j >= 0; j--) {
            cout << char('A' + j);
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout<<"enter no of rows:";
    cin>>n;
    pattern3(n);
    return 0;
}
