#include<iostream>
using namespace std; 

int main()
{
    int n,mul; 
    n = 1;
    mul = 8; 
    do 
    {
        mul = mul*n;
        cout << mul <<endl; 
        
        n++; 
    } while (n < 8);
   
    return 0;
}