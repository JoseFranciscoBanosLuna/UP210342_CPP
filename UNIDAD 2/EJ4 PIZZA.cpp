#include<iostream>
using namespace std; 

int main()
{
    char tipo; 
    string ingr;
    string sabor = "Mozzarela, Tomate y "; 
    string extr; 
    cout << "Cómo quieres tu pizza: " <<endl; 
    cout << "- Vegetariana" <<endl; 
    cout << "- NoVegetariana" <<endl;
    cin >> ingr;
    if (ingr == "Vegetariana")
    {
        cout << "Elige tu ingrediente Vegetariano: " <<endl; 
        cout << "- Tofu" <<endl; 
        cout << "- Pimiento" <<endl;
        cin >> extr; 
        if (extr == "Tofu")
        {
            sabor = sabor + "Tofu"; 
        } else {
            sabor = sabor + "Pimiento";
        }
        cout << "Tu pizza es " << ingr << " con " << sabor <<endl;
    } else if (ingr == "NoVegetariana") {
    { 
        cout << "Elige tu ingrediente No Vegetariano: " <<endl; 
        cout << "- Peperoni" <<endl; 
        cout << "- Jamon" <<endl;
        cout << "- Salmon" <<endl;
        cin >> extr;
        if (extr == "Peperoni")
        {
            sabor = sabor + "Peperoni"; 
        } else 
        { if (extr == "Jamon")
        {
            sabor = sabor + "Jamon";
        } else 
        {
            sabor = sabor + "Salmon";
        }
        }
        cout << "Tu pizza es " << ingr << " con " << sabor <<endl;
    }
    }
    return 0;
}