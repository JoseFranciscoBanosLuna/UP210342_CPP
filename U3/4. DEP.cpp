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