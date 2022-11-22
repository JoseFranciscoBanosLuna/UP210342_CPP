## ***UNIDAD 3:***  Functions

<center>

> ### 1. BISECCION: 
> A program that gives the roots of an equation.

</center>

 ___
 ```
#include<iostream>
#include<cmath>
using namespace std;

const double E=2.718281828;

double Ecuacion(int x)
{
    double r;
    r = pow(x, 2) - 8*x + 15;
    return r;
}

double Ecuacion2(double x)
{
    double r;
    r= pow(E, -x) + 4*pow(x, 3) -5;

    return r;
}

int main()
{
    int n = 10;
    int Ec;
    for (int i = 0; i<= 10; i++)
    {
        Ec=Ecuacion(i);
        cout << "x = " << i << " Resultado de ecuacion  = "<< Ec << endl;
    }

    return 0;
}


```
---

<center>

 *RESULT:*
---

<img src= "C:\Users\jfbl2\Documents\UP210342_CPP\IMG\BIsec.png" alt="">



---
> ### 2. BISIESTO: 
> A program that asks the user for a year and it'll answer if that year is a leap year.

</center>

 ___
 ```
int main ()
{
    int ano;
    string r;
    cout << "\n Dame un year y te dire si es bisiesto o no"<<endl;
    do 
    {    
        cin >> ano;
        cout << esBisiesto(ano) <<endl;
        cout << "\n Deseas sacar otro year?"<< endl;
        cin >> r;
    } while (r == "y");
    return 0;
}


```
---

<center>

 *RESULT:*
---


![Alt biseccion](C:\Users\jfbl2\Documents\UP210342_CPP\IMG\BIsec.png)


---

> ### 3. COSENO: 
> A program that asks the user for degrees, and it'll give the Cos of said degrees.

</center>

 ___
 ```
#include <iostream>
#include <math.h> 
#include "Libro.h"
using namespace std;

double cos(double x)
{
    double c=0;
    for (int i=0; i<=6;i++)
    {
        c=c+(pow(-1, i)*((pow(x, 2*i))/factorial(2*i)));
    }

    return c;
}

int main()
{   
    double a,r,res;
    cout << "Dame el angulo" << endl;
    cin >> a;
    res = G2R(a);
    r = cos(res);
    cout << "El coseno es " << r << endl;
}


```
---

<center>

 *RESULT:*
---

![Alt biseccion](C:\Users\jfbl2\Documents\UP210342_CPP\IMG\BIsec.png)

---

> ### 4. DEP: 
> A program that asks the user for a set of data, and it'll give the standard deviation of the population and sample.

</center>

 ___
 ```
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int NumDat;
    cout << "Ingrese el numero de datos" << endl;
    cin >> NumDat;
    int dat[NumDat];
    cout << "Ingrese los datos [SOLO ENTEROS]" << endl;
    for (int i = 0; i < NumDat; i++)
    {
        cin >> dat[i];
    }
    int sumatoria = 0;
    for (int i = 0; i < NumDat; i++)
    {
        sumatoria = sumatoria + dat[i];
    }
    double media = (double)sumatoria / NumDat;
    double sum2 = 0.0;
    for (int i = 0; i < NumDat; i++)
    {
        sum2 = sum2 + (dat[i] - media) * (dat[i] - media);
    }
    double varianza = (double)sum2 / NumDat;
    double dem = (double)sum2 / (NumDat - 1);
    double DEP = sqrt(varianza);
    double DEM = sqrt(dem);
    cout << "Media: " << media << endl;
    cout << "Varianza: " << varianza << endl;
    cout << "Desviacion Estandar Poblacional: " << DEP << endl;
    cout << "Desviacion Estandar Muestral: " << DEM << endl;

    return 0;
}


```
---

<center>

 *RESULT:*
---

![Alt biseccion](C:\Users\jfbl2\Documents\UP210342_CPP\IMG\BIsec.png)

---

> ### 5. DESGLOSE: 
> A program that asks the user for x amount of money, and the program will give a breakdown of each bill and coin it can give for said amount.

</center>

 ___
 ```
#include <iostream>
#include <stdio.h>
using namespace std;

void getCambio(int);
void displayCambio(string);

int mil = 0, quin = 0, dosc = 0, cien = 0, cinc = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0, residue;

int calculo(int billetes, int getdin)
{
    int resultado;
    resultado = getdin / billetes;
    residue = getdin % billetes;
    getdin = residue;

    return resultado;
}
void getCambio(int getdin)
{
    mil = calculo(1000, getdin);
    quin = calculo(500, residue);
    dosc = calculo(200, residue);
    cien = calculo(100, residue);
    cinc = calculo(50, residue);
    veinte = calculo(20, residue);
    diez = calculo(10, residue);
    cinco = calculo(5, residue);
    dos = calculo(2, residue);
    uno = calculo(1, residue);
}

void displayCambio(string)
{
    cout << "- Billetes: \n";
    cout << "Mil: " << mil << endl;
    cout << "Quinientos: " << quin << endl;
    cout << "Docientos: " << dosc << endl;
    cout << "Cien: " << cien << endl;
    cout << "Cincuenta: " << cinc << endl;
    cout << "Veinte: " << veinte << endl;
    cout << "- Monedas: \n";
    cout << "Diez: " << diez << endl;
    cout << "Cinco: " << cinco << endl;
    cout << "Dos: " << dos << endl;
    cout << "Uno: " << uno << endl;
}

int main()
{
    int din;
    string elegir;
    cout << "Ingresa la cantidad de dinero ";
    cin >> din;
    
    getCambio(din);
    displayCambio("dinero");

    return 0;
}


```
---

<center>

 *RESULT:*
---

![Alt biseccion](C:\Users\jfbl2\Documents\UP210342_CPP\IMG\BIsec.png)

---

> ### 6. A2R: 
> A program that asks the user for a number, and it'll convert it into roman numbers.

</center>

 ___
 ```
#include <iostream>

using namespace std;

int main(){
	while(1){
		int numero,unidades,decenas,centenas,millares;
		
		cout << "\n Ingresa un numero entre 1 y 3999 para convertirlo a romano: ";
		cin >> numero;
		
		unidades = numero%10; numero /= 10;
		decenas = numero%10; numero /= 10;
		centenas = numero%10; numero /= 10;
		millares = numero%10; numero /= 10;
		
		switch(millares)
        {
			case 1: cout << "M"; break;
			case 2: cout << "MM"; break;
			case 3: cout << "MMM"; break;
		}
		
		switch(centenas)
        {
			case 1: cout << "C"; break;
			case 2: cout << "CC"; break;
			case 3: cout << "CCC"; break;
			case 4: cout << "CD"; break;
			case 5: cout << "D"; break;
			case 6: cout << "DC"; break;
			case 7: cout << "DCC"; break;
			case 8: cout << "DCCC"; break;
			case 9: cout << "CM"; break;
		}
		
		switch(decenas)
        {
			case 1: cout << "X"; break;
			case 2: cout << "XX"; break;
			case 3: cout << "XXX"; break;
			case 4: cout << "XL"; break;
			case 5: cout << "L"; break;
			case 6: cout << "LX"; break;
			case 7: cout << "LXX"; break;
			case 8: cout << "LXXX"; break;
			case 9: cout << "XC"; break;
		}
		
		switch(unidades)
        {
			case 1: cout << "I"; break;
			case 2: cout << "II"; break;
			case 3: cout << "III"; break;
			case 4: cout << "IV"; break;
			case 5: cout << "V"; break;
			case 6: cout << "VI"; break;
			case 7: cout << "VII"; break;
			case 8: cout << "VIII"; break;
			case 9: cout << "IX"; break;
		}
		
	}
	return 0;
}


```
---

<center>

 *RESULT:*
---

![Alt biseccion](C:\Users\jfbl2\Documents\UP210342_CPP\IMG\BIsec.png)

---

> ### 7. RFC: 
> A program that asks the user for their full name and birthday, and it'll give them their RFC.

</center>

 ___
 ```
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string apellidoP;
    string apellidoM;
    string nombre;
    string fecha;
    string RFC;

    cout << "Dame tu nombre completo empezando por apellidos, de uno en uno [EN MAYUSCULAS]" << endl;
    cin >> apellidoP;
    cin >> apellidoM;
    cin >> nombre;

    cout << "Dame tu fecha de nacimiento sin espacios" << endl;
    cin >> fecha;

    RFC = apellidoP.substr(0, 2) + apellidoM.substr(0, 1) + nombre.substr(0, 1) + fecha.substr(4, 4) + fecha.substr(2, 2) + fecha.substr(0, 2);
    cout << "Tu RFC es " << RFC << endl;

    return 0;
}


```
---

<center>

 *RESULT:*
---

![Alt biseccion](C:\Users\jfbl2\Documents\UP210342_CPP\IMG\BIsec.png)

---

> ### 8. Vector: 
> A program that orders values in a vector from smallest to largest using the bubble method. 

</center>

 ___
 ```
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,temp,vector[100];
    cout<< "Cuantos numeros deseas ingresar: "<< endl;
    cin >> n;
    for (i = 0; i < n; i++){
        cout<< "Ingresa el numero " << 1+i << ")" << endl;
        cin>> vector[i];
    }
    cout << endl;
//Método de la burbuja
    for (i = 0; i < n-1; ++i){
        for (j = 0; j < n-1; ++j){
            if (vector[j] > vector[j+1]){
                temp = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
    for (i = 0; i < n; ++i){
        cout<< 1+i << ")" << vector[i] <<endl;
    }

    return 0;
}

```
---

<center>

 *RESULT:*
---

![Alt biseccion](C:\Users\jfbl2\Documents\UP210342_CPP\IMG\BIsec.png)

> ### 9. FuncionRecursiva: 
> A program that gives the factorial of x number using a recursive function (that calls itself).

</center>

 ___
 ```
#include <iostream>  
using namespace std;
double factorial(double n)
  {
     if (n==1 || n==0)   
         {
            return 1;
         }
      return n * factorial(n - 1);   
  }
int main()
  {
     int n; 
     cout << "Dame un numero y te dire su factorial con recursividad: " <<endl;
     cin >> n; 
     cout<< "Factorial de  "<< n <<" es " << factorial(n) << endl;

     return 0;
  }

```
---

<center>

 *RESULT:*
---

![Alt biseccion](C:\Users\jfbl2\Documents\UP210342_CPP\IMG\BIsec.png)

---