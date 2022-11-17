#include<iostream>
#include<cmath>
#include "Libro.h"
using namespace std;

bool esBisiesto(int year)
{
    bool r = true; 
    r =  year%400==0 || (year%4==0 && year%100!=0);
    return  r;
}

int main ()
{
    double a = 45;
    cout << endl;
    cout << seno(a) << endl;
    cout << sum(5,7) << endl;
    cout << esBisiesto(2024) <<endl;

    cout << ". . . Done";
    return 0;
}