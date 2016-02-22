#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    /*Ingresar dos numeros y presentar la suma*/
    int num1, num2, suma, multi;
    printf("Ingresar un numero x \n");

    scanf("%d",&num1);

    printf("Ingresar un numero y \n");
    scanf("%d",&num2);

    suma = num1 + num2;
    multi = num1 * num2;

    printf("Suma de los numeros es \n%d \n",suma);
    printf("Multiplicacion de los numeros es \n%d \n", multi);
    system("PAUSE");
    return 0;
}
