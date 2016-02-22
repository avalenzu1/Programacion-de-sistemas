#include <iostream>

using namespace std;
/*Ingresar la nota acumulada y examen, luego obtener la nota final
y ajustarla a 60 si se encuentra entre 57-59 a 60, presentar la
nota y el estado si es aprobado o reprobado*/

int nexam, nacum, nfin;

int main()
{
    cout<<"Ingresar la nota acumulada\n";
    cin>> nacum;
    cout<<"Ingresar la nota de examen\n";
    cin>> nexam;

    nfin = nacum + nexam;

    if ((nfin>=51)and(nfin<=59))
    {
        nfin = 60;
    }

    else
    {
        nfin = nfin;
    }

    cout<<"Nota final es\n"<<nfin;

    if(nfin>=60)
    {
        cout<<"\nAlumno aprobado";
    }

    else
    {
        cout<<"\nAlumno reprobado";
    }

    return 0;
}
