#include <iostream>

using namespace std;

char nombre[30];
int turno;
double ventas, comis, pcomis;

void Datos(char nombre[], int &turno, double &ventas)
{
    cout<<"Ingresar nombre....";
    cin>>nombre;
    do
    {
        cout<<"Ingresar turno 1-3....";
        cin>>turno;
    }
    while (!(turno==1 or turno==2 or turno==3));
    cout<<"Ingresar ventas....";
    cin>>ventas;
}

double porcomis(int turno)
{
    if(turno==1)
    {
        return 0.05;
    }
    else if(turno==2)
    {
        return 0.06;
    }
    else
    {
        return 0.04;
    }
}

void calcular(double ventas, double &comis, double &pcomis, int turno)
{
    pcomis= porcomis(turno);
    comis= ventas*pcomis;
}

int main()
{
    Datos(nombre, turno, ventas);
    calcular(ventas, comis, pcomis, turno);
    cout<<"Comision...."<<pcomis<<"\n";
    cout<<"Comision ganada...."<<comis<<"\n";

    return 0;
}
