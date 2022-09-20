/*  Unidad 1: Tipos de datos
    Autor: José Francisco Baños Luna 
    Fecha: 1/9/22
    Descripción: Muestra los diferentes tipos de datos en c++
*/

#include <iostream> 
#include<stdio.h>

using namespace std;

int main()
{
    int entero= 3141615033;
    float flotante= 15.1919; 
    double grande= 1029384756;
    char caracter= '|'; 

    cout << "Este programa muestra los tipos de datos. \n"; 
    cout << "El numero entero es: " <<entero << endl;
    cout << "El tamaño del entero es: " <<sizeof(entero) <<"bytes" << endl; 
/*
    cout << "El numero flotante es: " <<flotante <<endl;
*/
getchar();
return 0; 
}