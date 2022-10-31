#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    int n; 
    int s;
    char pr;
    string bin; 
    cout<<"Dame un número en decimal para convertirlo en binario"<<endl;
    cin >> n; 
    s = n;
    cout<<endl;
    for (int i = 8; i >= 1; i--)
    {
        if (n % 2 > 0)
        {
            bin= '1' + bin;
            n = n/2;
            floor(n);
        } else 
        { 
            bin = '0' + bin; 
            n=n/2;
            floor(n);
        }
    }
    cout <<endl<< s << " en binario es: "<< bin <<endl; 
return 0;
}