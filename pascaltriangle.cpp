/* 
To Print the pattern pascal triangle...
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 

*/
#include <iostream>
using namespace std;
int pattern2(int n){
     
    for (int i = 0; i < n; i++)        //for outer loop
     {         
        
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");

        int value = 1;
        for (int k = 0; k <= i; k++)  // Print values in row
        {
            printf("%d ", value);
          
            value = value * (i - k) / (k + 1);  
        }
        printf("\n");
    }
}
int main() {
  
    int n;
    cout<<"Enter no of rows :";
    cin>>n;
    pattern2(n);
    return 0;
}