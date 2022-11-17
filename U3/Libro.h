#include<iostream>
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