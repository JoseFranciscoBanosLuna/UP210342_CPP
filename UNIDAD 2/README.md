## ***UNIDAD 2:***  Control structures and cycles
<center>

> ### E01. ABC.cpp:
</center>

___
```
int main()
{
    char letra= 'A';
    for (int i = 0; i < 26; i++)
    {
        cout <<letra<< "\t";
        letra=letra+1;
    }
    cout <<endl;
    letra=letra+6;
    for (int i = 0; i <26; i++)
    {
        cout <<letra << "\t";
        letra= letra + 1;
    }
    cout <<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<< i+1 <<"\t";
    }
    for (int j = 10; j > 0; j--)
    {
        cout<< j << "\t";
    }
    return 0;
}

```
---

<center>

> ### 2. E02 TABLAPREGUN.cpp: 

</center>

 ___
 ```
#include<iostream>
using namespace std;

int main()
{
    int count=11;
    int n,mult; 
    char pr; 
    do {
        cout <<"Dame un número y te diré su tabla de multiplicar \n";
        cout <<"\n";
        cin >> n;
        for (int i = 1; i < count; i++)
        {
            mult = n*i;
            cout << n << "*" << i << "=" << mult << "\n";
        }
        cout <<"deseas sacar otra tabla? (s/n) \n"; 
        cin >> pr; 
    } while (pr=='s');
    return 0;
}

```
---

<center>

> ### 3. E03 TABLAFORFOR.cpp: 

</center>

___
```
#include <iostream>
using namespace std;

int main()
{

    //TODAS LAS TABLAS DE 1 A 10
    for (int i = 1; i <=10; i++)
    {
        cout << "Tabla del "<<i<<"\n";
        cout << "\n";
        for (int j = 1; j <=10; j++)
        {
            cout << i << " x " << j << " = " <<(i*j)<<"\n";
        }
        cout<<"\n";
    }
return 0;
}

```
___

<center>


> ### 4.1 E04.1 TABLA ASCENDENTE.cpp: 

</center>


___
```
#include<iostream>
using namespace std;

int main()
{
    int count=11;
    int n,mult; 
    cout <<"Dame un número y te diré su tabla de multiplicar \n";
    cout <<"\n";
    cin >> n;
    /*ciclo for*/
    for (int i = 1; i < count; i++)
    {
        mult = n*i;
        cout << n << "*" << i << "=" << mult << "\n";
    }
    return 0;
}

```
___



<center>

> ### 4.2 E04.2 TABLA DESCENDENTE.cpp: 

</center>

___
```
#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int n,mult; 
    cout <<"Dame un número y te diré su tabla de multiplicar \n";
    cout <<"\n";
    cin >> n;
    /*ciclo for*/
    for (int i = 10; i > 0; i--)
    {
        mult = n*i;
        cout << n << "*" << i << "=" << mult << "\n";
    }
    return 0;
}

```
___

<center>

> ### EJ1 IMPUESTO.cpp: 

</center>

___
```
#include <iostream>
using namespace std;

int main()
{
    int renta = 0;
    int imp= 0;
    cout <<"Dame tu renta anual para darte tu interés correspondiente \n";
    cout <<"\n";
    cin >> renta;
    if (renta <= 10000)
    {
        cout << "\n Tu impuesto correspondiente es de 5%";
    } else if (renta > 10000 && renta <= 20000)
    {
        cout << "'\n Tu impuesto correspondiente es de 10%";
    } else if (renta > 20000 && renta <= 35000)
    {
        cout << "\n Tu impuesto correspondiente es de 15%";
    } else if (renta > 35000 && renta <= 60000)
    {
        cout << "\n Tu impuesto correspondiente es de 20%";
    }else if (renta > 60000)
    {
        cout << "\n Tu impuesto correspondiente es de 45%";
    }
    return 0;
}

```
___

<center>

> ### EJ3 SALAJUEGOS.cpp: 

</center>

___
```
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

```
___