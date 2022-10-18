#include<iostream>
using namespace std;

int main()
{
    int count=11;
    int n,mult; 
    cout <<"Dame un número y te diré su tabla de multiplicar (FOR) \n";
    cin >> n;
    cout<<endl; 
    /*FOR*/
    for (int i = 1; i < 11; i++)
    {
        mult = n*i;
        cout << n << "*" << i << "=" << mult << "\n";
    }
    /*WHILE*/
    int contador; 
    contador = 1;
    cout <<"Dame un número y te diré su tabla de multiplicar (WHILE) \n";
    cin >> n;
    cout <<endl;
    while (contador <= 10)
   {

        mult = n*contador;
        cout << n << "*" << contador << "=" << mult << "\n";

        contador++;
   }
   /*DO WHILE*/
   int c = 1; 
   cout <<"Dame un número y te diré su tabla de multiplicar (DO WHILE) \n";
   cin >> n;
   cout<<endl;
   do 
   {
        mult = n*c;
        cout << n << "*" << c << "=" << mult << "\n";

        c++; 
   } while (c <= 10);
    return 0;
}