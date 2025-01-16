#include <iostream>
using namespace std;

void printPattern(int n) {
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min =({i, j, size - i - 1, size - j - 1});
            cout << (n - min) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // Change this to adjust the size of the pattern
    printPattern(n);
    return 0;
}
