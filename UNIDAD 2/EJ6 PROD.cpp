# include<iostream>
using namespace std;

int main()
{
    float prod; 
    float sum = 0; 
    cout << "Dame los precios de tus productos y te daré el total, para terminar coloca un 0" <<endl; 
    do 
    {
        cin >> prod; 
        sum = sum + prod;
    } while (prod != 0 );
    cout << "Tu total es " << sum <<endl;
}