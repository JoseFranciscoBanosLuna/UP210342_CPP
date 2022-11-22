#include <iostream>
#include <cmath>
using namespace std;

double G2R(double a)
{
    double r;
    r = a * M_PI / 180;

    return r;
}

double seno(double a)
{
    return sin(G2R(a));
}

int main()
{
    double a = 45;
    cout << endl;
    cout << seno(a) << endl;

    cout << ". . . Done";
    return 0;
}