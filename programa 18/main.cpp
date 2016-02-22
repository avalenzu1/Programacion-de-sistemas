#include <iostream>

using namespace std;
/*1)Producir la siguiente salida
*****
****
**
*
Usando ciclos For anidados.

2)Encontrar los multiplos de 3
entre 100-1000

3)En arduino usando el sensor ultrasonico
encender un led cuando este se encuentre
entre 5cm y 10cm */

int main()
{
    int x, y;

    for(x=5;x>=1;x--)
    {
        for(y=1;y<=x;y++)
        {
          cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
