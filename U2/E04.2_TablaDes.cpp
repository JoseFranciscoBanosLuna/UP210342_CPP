#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int n,mult; 
    cout <<"Dame un número y te diré su tabla de multiplicar \n";
    cin >> n;
    cout <<endl;
    /*FOR*/
    for (int i = 10; i > 0; i--)
    {
        mult = n*i;
        cout << n << "*" << i << "=" << mult << "\n";
    }
    /*WHILE*/
    int contador; 
    contador = 10;
   cout << "dame un número para sacar su tabla de multiplicar (WHILE)"<< endl;
   cin >> n;
   cout <<endl;
   while (contador >= 1)
   {
    mult = n*contador;
    cout << n << "*" << contador << "=" << mult << "\n";

    contador--;
   }
    /*DO WHILE*/
    int c = 10; 
    cout <<"Dame un número y te diré su tabla de multiplicar (DO WHILE) \n";
   cin >> n;
   cout<<endl;
   do 
   {
        mult = n*c;
        cout << n << "*" << c << "=" << mult << "\n";

        c--; 
   } while (c >= 1);
   return 0;
}