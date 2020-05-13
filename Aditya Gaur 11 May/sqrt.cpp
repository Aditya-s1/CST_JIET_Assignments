#include<bits/stdc++.h> 
using namespace std; 
int floorSqrt(int x) 
{
    if (x == 0 || x == 1) 
    return x; 
  
    // Staring from 1, try all numbers until 
    // i*i is greater than or equal to x. 
    int i = 1, result = 1; 
    while (result <= x) 
    { 
      i++; 
      result = i * i; 
    } 
     return i - 1; 
} 
int main() 
{ 
    int x;
    cout << "Enter Number:"<<endl;
    cin >> x;
    cout << "Square root of number "<< x << " is ";
    cout << floorSqrt(x) << endl; 
    return 0; 
} 