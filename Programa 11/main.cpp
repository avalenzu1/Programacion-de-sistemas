#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
/* Generar 10 numeros aletorios, presentarlos en la
pantalla al final presentar el numero mayor
y el promedio de los 10 numeros.
Generar los numeros entre 30-80*/

int main()
{
    srand(time(0));
    int i=0, numero, mayor=0, promedio=0;
    for(i=1; i<=10; i++)
    {
        numero = 30 + rand() % (80-30);
        cout<<"\nValor del numero "<<numero;
        promedio = promedio + numero;
        if(numero>mayor)
        {
            mayor=numero;
        }
    }
    promedio = promedio/10;
    cout<<"\nPromedio de los numeros "<<promedio;
    cout<<"\nNumero mayor "<<mayor;
    return 0;
}
