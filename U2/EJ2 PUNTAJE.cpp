#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float p;
    int n;
    cout<< "Cual es tu puntuación?" <<endl; 
    cin>> p;

    if (p == 0.0f || p == 0.4f || p >= 0.6f)
    {
        if (p == 0.0f)
        {
            n = 2400 * 0.0f;
            cout << "Tu nivel es Inaceptable y recibirás " << n <<endl; 
        }
        else if (p == 0.4f)
        {
            n = 2400 * 0.4f; 
            cout << "Tu nivel es Aceptable y recibirás " << n <<endl; 
        }
        else if (p >= 0.6f)
        {
            n = 2400 * p;
            cout << "Tu nivel es Meritorio y recibirás " << n << endl; 
        }
    } else 
    {
        cout << "El valor que ingresaste no es válido" <<endl; 
    }
    
    return 0;
}