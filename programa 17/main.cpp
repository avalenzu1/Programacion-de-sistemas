#include <iostream>

using namespace std;
/*Pedir la tabla de multiplicador entre
5-10. Luego presentar la tabla multiplicada
de 1 a 10.
Tabla 6
1 x 6 = 6
.
.
10 x 6 = 60
Luego preguntar si desea continuar.*/

int main()
{
    int num, x, i;
    char resp;

    do
    {
        cout<<"Ingrese un numero entre 5 y 10 para\nver la tabla multiplicadora.....";
        cin>>num;

        do
        {
            if((num<5)or(num>10))
            {
                cout<<"Numero Invalido. Reingresar un numero....";
                cin>>num;
            }
        }while((num<5)or(num>10));

        for(i=1;i<=10;i++)
        {
            x=num*i;
            cout<<num<<" x "<<i<<" = "<<x<<"\n";
        }
        cout<<"Desea continuar? s o n.....";
        cin>>resp;
        do
        {
            if((resp!='s')and(resp!='n'))
            {
                cout<<"Respuesta Invalida. Reingrese su respuesta...";
                cin>>resp;
            }
        }while((resp!='s') and (resp!='n'));
        cout<<"\n";

    }while (toupper(resp)=='S');

    return 0;
}
