#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int suma = 0;
    int par = 0;
    int impar = 0;
    int total = impar + par; 
    for (int i = 1; i <= n; i++)
    {
        printf(" Contador %d \n", i);
        printf("\n"); 
        suma = suma + i;
        if (i % 2 == 0)
        {
            par += i;
        }
        else
        {
            impar += i;
        }

    }
    total = impar + par; 
    printf(" La suma de los impares es %d \n", impar);
    printf("\n");
    printf(" La suma de los pares es %d \n", par);
    printf("\n");
    printf(" La suma total es %d \n", total);
    printf("\n");
    return 0;
}