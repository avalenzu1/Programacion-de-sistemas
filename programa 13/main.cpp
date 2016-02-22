#include <iostream>

using namespace std;

int main()
{
    int numero;
    do
    {
        cout<<"Ingresar numero 50-100...";
        cin>>numero;
    }while(!(numero>=50)and(numero<=100));

    return 0;
}
