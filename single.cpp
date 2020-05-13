#include <iostream> 
using namespace std; 
// Driver code 
int main() 
    { 
        int ar[] = {2, 3, 5, 4, 5, 3, 4}; 
        int n = sizeof(ar) / sizeof(ar[0]); 
         int res = ar[0]; 
        for (int i = 1; i < n; i++) 
            res = res ^ ar[i]; 
        cout << "Element occurring once is " 
             << res; 
        return 0; 
    } 