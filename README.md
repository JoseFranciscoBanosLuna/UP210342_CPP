<center>
UNIVERSIDAD POLITÉCNICA DE AGUASCALIENTES  

  José Francisco Baños Luna  
UP210342    


___
#  **Programación** 




> **COMANDOS GITHUB:**

* Git status
* Git add .
* Git commit -m " "
* Git push
</center>

![Alt hackerman](IMG/toño.jpg)
___
<div align="center">


## **TABLA**
|Equipo padrisisisimo|UP      |
|--------------------|--------|
|Antoño              |UP210289|
|Pako                |UP210342|

___
</div>


## ***UNIDAD 1:***  Programming introduction
<center>

> ### 1. Ciclos.cpp:
</center>

___
```
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

```
---

<center>

> ### 2. Hola Mundo.cpp: 

</center>

 ___
 ```
#include <iostream>

using namespace std;  

int main(){
    cout<<"HolA Mundo"; 
    return 0;
}

```
---

<center>

> ### 3. Parimpar.cpp: 

</center>

___
```
#include<iostream>
using namespace std;

int main()
{
    cout <<"Par o Impar" <<endl<<"\n" <<endl;
    return 0;
}

```
___

