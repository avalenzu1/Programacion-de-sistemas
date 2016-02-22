#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*Ingresar la nota examen y la nota acumulada en base a 100.
La nota examen vale 70% y la nota acumulada 30%*/

int main()
{
   double ne, na, nf;
   printf("Ingresar nota examen en base a 70%\n");
   scanf("%lf", &ne);

   printf("Ingresar nota acumulada en base a 30%\n");
   scanf("%lf", &na);

   nf = (ne*0.7) + (na*0.3);

   printf("La nota final es \n%lf \n", nf);

   if(nf>=60)
   {
       printf("Estado de la nota: Aprobado\n");
   }
   else
   {
       printf("Estado de la nota: Reprobado\n");
   }
   system("PAUSE");
    return 0;
}
