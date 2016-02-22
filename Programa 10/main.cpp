#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    srand(time(0));
    int i=0, n, numero;
    cout<<"Ingresar numero de veces...";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        numero = 50 + rand() % (100-50);
        cout<<"\nValor de la I es "<<i<<"\n"<<"Valor de Numero "<<numero;
    }
    return 0;
}
