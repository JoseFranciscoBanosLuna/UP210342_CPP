#include <iostream>  
using namespace std;
double factorial(double n)
  {
     if (n==1 || n==0)   
         {
            return 1;
         }
      return n * factorial(n - 1);   
  }
int main()
  {
     int n; 
     cout << "Dame un numero y te dire su factorial con recursividad: " <<endl;
     cin >> n; 
     cout<< "Factorial de  "<< n <<" es " << factorial(n) << endl;

     return 0;
  }