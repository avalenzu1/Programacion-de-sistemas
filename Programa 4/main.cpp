#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*Ingresar dos numeros y determinar cual numero es mayor*/
int main()
{
    int x,y;

    printf("Ingresar primer numero\n");
    scanf("%d", &x);

    printf("Ingresar segundo numero\n");
    scanf("%d", &y);

    if(x>y)
    {
        printf("El numero mayor es: %d\n",x);
    }
    else
    {
        printf("El numero mayor es: %d\n",y);
    }
    system("PAUSE");
    return 0;
}
