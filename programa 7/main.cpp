#include <iostream>

using namespace std;

int numero;
/*Ingresar un numero y determinar su rango 1-50,
51-100 y mayor a 100*/

int main()
{
    cout<<"Ingresar un numero\n";
    cin>> numero;

    if((numero>=1)and(numero<=50))
    {
        cout<<"Numero esta entre 1-50\n";
    }

    else if((numero>=51)and(numero<=100))
    {
        cout<<"Numero esta entre 51-100\n";
    }

    else if(numero>100)
    {
        cout<<"Numero es mayor a 100\n";
    }

    else
    {
        cout<<"Numero es negativo\n";
    }

    return 0;
}
