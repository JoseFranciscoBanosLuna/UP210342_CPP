#include<iostream>
using namespace std;

int main()
{
    int count=11;
    int n,mult; 
    cout <<"Dame un número y te diré su tabla de multiplicar \n";
    cout <<"\n";
    cin >> n;
    /*ciclo for*/
    for (int i = 1; i < 11; i++)
    {
        mult = n*i;
        cout << n << "*" << i << "=" << mult << "\n";
    }
    return 0;
}