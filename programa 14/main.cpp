#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char resp;

    do
    {
        cout<<"Desea continuar....:";
        cin.get(resp);
        _flushall();
    }
    while ((toupper(resp) !='S') and (toupper(resp) !='N'));

    return 0;
}
