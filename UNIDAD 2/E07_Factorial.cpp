#include<iostream>
using namespace std; 

int main()
{
    int n,mul; 
    n = 1;
    mul = 4; 
    do 
    {
        mul = mul*n;
        cout << mul << endl; 
        
        n++; 
    } while (n <=10);
    return 0;
}