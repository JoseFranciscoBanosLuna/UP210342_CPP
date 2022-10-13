#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for (int i = 0; i<=10; i++)
    {
        if (i == 3)
        {
            break; 
        } else{
            cout << i <<endl;
        }
        cout << "numero " << i <<endl; 
    }
    cout << ". . . Hecho" << endl;
    return 0;
}