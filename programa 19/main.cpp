#include <iostream>

using namespace std;
/*Encontrar los multiplos de 3
entre 100-1000*/

int main()
{
    int i;

    for(i=100;i<=1000;i++)
    {
        if((i%3)==0)
        {
            cout<<i<<"\n";
        }
    }

    return 0;
}
