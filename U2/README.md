## ***UNIDAD 2:***  Control structures and cycles

<center>

> ### 1. IMPUESTO: 
> A program that asks the user their annual rent, and shows the tax that corresponds them.

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
---

<center>

 *RESULTADO:*
---

![Alt HOLAMUNDO](IMG/../../IMG/IMPUESTOF.png)

---

> ### 2. PUNTAJE: 
> A program that asks the user their final score in the anual evaluation in the company they work at. Depending on the score, they´ll get a bonus of certain amount of money. 

</center>

 ___
 ```
#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float p;
    int n;
    cout<< "Cual es tu puntuación?" <<endl; 
    cin>> p;

    if (p == 0.0f || p == 0.4f || p >= 0.6f)
    {
        if (p == 0.0f)
        {
            n = 2400 * 0.0f;
            cout << "Tu nivel es Inaceptable y recibirás " << n <<endl; 
        }
        else if (p == 0.4f)
        {
            n = 2400 * 0.4f; 
            cout << "Tu nivel es Aceptable y recibirás " << n <<endl; 
        }
        else if (p >= 0.6f)
        {
            n = 2400 * p;
            cout << "Tu nivel es Meritorio y recibirás " << n << endl; 
        }
    } else 
    {
        cout << "El valor que ingresaste no es válido" <<endl; 
    }
    
    return 0;
}


```
---

<center>

 *RESULTADOS:*
---


![Alt 0.0](IMG/../../IMG/0.0.png)

---
![Alt 0.0](IMG/../../IMG/0.4.png)

---
![Alt 0.0](IMG/../../IMG/0.6.png)
