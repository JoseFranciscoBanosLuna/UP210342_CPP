#include <iostream>
using namespace std;

#define F 4
#define C 4 

void llenarM (int A[F][C])
{
    int contador = 1; 
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            A[i][j] = contador; 
            contador++;
        }
        cout << "\n";
    }
    cout << endl;
}

void imprimirM(int A[F][C])
{
    for (int i = 0 ; i < F; i++)
    {
        for (int j = 0 ; j < C; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int matriz[F][C];
    llenarM(matriz); 
    imprimirM(matriz); 

    return 0;
}