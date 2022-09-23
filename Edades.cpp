#include <iostream>
using namespace std; 

int main()
{
    int e = 0;
    cout <<"Dame tu edad para ver a que categoría perteneces \n"; 
    cout <<"\n"; 
    cin >> e; 
    if (e >= 1 && e <= 30)
    {
        cout <<"\n"; 
        cout <<"Eres Primera Edad"; 
        cout <<"\n"; 
    }
    else 
    {
        if (e >= 31 && e<= 60)
        {
            cout <<"\n"; 
            cout <<"Eres Segunda Edad"; 
            cout <<"\n"; 
        }
        else 
        {
            if (e >= 61 && e <=90) 
            {
                cout <<"\n"; 
                cout <<"Eres Tercera Edad"; 
                cout <<"\n"; 
            }
            else 
            {
                cout <<"\n"; 
                cout <<"Eres Horas Extra";
                cout <<"\n"; 
            }
        }
    }
    return 0; 
}