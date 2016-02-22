#include <iostream>

using namespace std;
/* presentar los numeros del 1 al 10 usando while*/
int c=0; int numero; int suma=0; int mayor=0; double promedio;

int main()
{
    while (c<5)
    {
        c++;
        cout<<"Numero # "<< c <<"\n";
        cin>> numero;
        suma+=numero;

        if (numero>mayor)
        {
            mayor=numero;
        }
        else
        {
            mayor=mayor;
        }
        promedio = suma/5;
    }

    cout<<"Suma de los numeros es "<<suma<<"\n";

    cout<<"El numero mayor es "<<mayor<<"\n";

    cout<<"El promedio de los numeros es "<<promedio<<"\n";

    cout<<"Final del ciclo\n";

    return 0;
}
