#include<iostream>
using namespace std; 

int main()
{
    int n,sum; 
    n = 1;
    sum = 0; 
    do 
    {
        sum = sum+n;
        cout << sum << endl; 
        
        n++; 
    } while (n <=10);
    return 0;
}