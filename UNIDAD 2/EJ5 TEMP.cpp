# include<iostream>
using namespace std;

int main()
{
    float sum = 0;
    float temp;
    float mayor = -254; 
    float menor = 254;
    cout << "Dame tus 6 temperaturas en kelvin y te diré el promedio, la menor y la mayor:" <<endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> temp;
        if ( temp > mayor) 
        {
            mayor = temp;
        } 
        else if ( temp < menor)
        {
            menor = temp;
        }
        sum = sum + temp;
    }
    cout << "El promedio es " << sum/6 << ", la temperatura mayor es " << mayor << " y la menor es " << menor <<endl;
    return 0;
}