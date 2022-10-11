#include <iostream>
using namespace std;

int main()
{
    int edad;
    char sn;
    do
    {
        cout << "Ingrese la edad del cliente \n";
        cin>>edad;
        if (edad<4){
            cout<<"La entrada es gratis \n";
        }else if (edad<=18){
                cout<<"La entrada cuesta $5 \n";
            }else{
                cout<<"La entrada cuesta $10 \n";
            }
        cout<<"¿Desea hacer otra consulta? (s/n)";
        cin>>sn;
    } while (sn=='s');   
    return 0;
}