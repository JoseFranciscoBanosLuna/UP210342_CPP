#include<iostream>
#include<cmath> 
using namespace std;

int sum(int x, int y)
{
    

    return(x+y);
}

double G2R(double a )
{
    double r;
    r = a*M_PI/180;
    
    return r;
}

double seno(double a)
{
    return sin(G2R(a));
}

double factorial(int num)
{
    double fac = 1.0;
    for (int i=1; i<=num; i++)
    {
        fac=fac*i;
    }
    return fac;
}