#include<iostream>
using namespace std; 

int main(int argc, char const *argv[])
{
    int cal[5]; 
    cal[0] = 10; 
    cal[1] = 9; 
    cal[2] = 8; 
    cal[3] = 7; 
    cal[4] = 8; 

    int cal2[] = {10,5,6,8,4}; 
    int n=5; 
    int total = 0; 
    int pr = 0;
    for (int i=0; i< n; i++)
    {
        total += cal2[i];
    }
    pr = total / n;
    cout << "EL total es " << total << " y el promedio es " << pr <<endl; 
    return 0; 
}