#include <iostream>
#include <stdio.h>

using namespace std;
/* Ingresar un numero entero entre 50-100,
luego preguntar si desea continuar al final
del ciclo debera de presentar el promedio
de los numeros entre 80-100 y cual fue el
numero mayor.*/

int main()
{
    int num, c=0, mayor=0;
    double prom=0;
    char resp;

    do
    {
        cout<<"Ingresar numero entre 50-100.....";
        cin>>num;
        if ((num>=80) and (num<=100))
        {
            c++;
            prom=prom+num;
        }
        if (num>mayor)
        {
            mayor=num;
        }
        cout<<"Desea continuar? s o n.........";
        cin>>resp;
        _flushall();
        do
        {
            if((resp!='s')and(resp!='n'))
            {
                cout<<"Respuesta Invalida. Reingrese su respuesta.....";
            cin.get(resp);
            _flushall();
            }
        } while((resp!='s')and(resp!='n'));
    }
    while (resp=='s');

    prom=prom/c;
    cout<<"\nEl promedio de 80-100 es...."<<prom;
    cout<<"\nEl numero mayor es...."<<mayor<<"\n";

    return 0;
}
