#include <iostream>

using namespace std;
int n1,n2,suma;
void ingreso (int &n1, int &n2)
{
    cout<< "ingresar valor de n1....:";
    cin >>n1;
    cout <<"ingresar el valor de n2....:";
    cin >>n2;
}

void sumaNumeros(int n1,int n,int &suma)
{
    suma= n1+n;
}
void presentar()
{
    cout<<"suma de los numeros es "<<suma<<"\n";
}
int main()
{
   ingreso(n1,n2);
   sumaNumeros(n1,n2,suma);
   presentar();

    return 0;
}
