#include <iostream>

using namespace std;

int horas, turno, p;
char nombre[30];

void Datos(int &horas, int &turno, char nombre[])
{
    cout<<"Nombre....";
    cin>>nombre;
    cout<<"Horas....";
    cin>>horas;
    cout<<"Turno....";
    cin>>turno;
}

int pago(int horas, int turno)
{
    int pago;
    if(turno==1)
    {
        pago=horas*100;
    }
    else if(turno==2)
    {
        pago=horas*120;
    }
    else if(turno==3)
    {
        pago=horas*150;
    }
    else
    {
        pago=0;
    }
    return pago;
}

int main()
{
    Datos(horas, turno, nombre);
    p= pago(horas, turno);
    cout<<"El pago es...."<<p<<"\n";

    return 0;
}
