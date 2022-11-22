#include<iostream> 
#include<math.h> 
using namespace std;

bool esBisiesto(int year)
{
    bool r = true; 
    r =  year%400==0 || (year%4==0 && year%100!=0);
    return  r;
}

int main ()
{
    int ano;
    string r;
    cout << "\n Dame un year y te dire si es bisiesto o no"<<endl;
    do 
    {    
        cin >> ano;
        cout << esBisiesto(ano) <<endl;
        cout << "\n Deseas sacar otro year?"<< endl;
        cin >> r;
    } while (r == "y");
    return 0;
}