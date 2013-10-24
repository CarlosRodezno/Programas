#include <iostream>

using namespace std;
/*
Ingresar la base y el exponente y determinar la potencia usando ciclo for.
*/

int main()
{   int base, exponente, potencia;
    base=0;
    exponente=0;
    potencia=1;

    cout << "Ingresar la base:" ;
    cin>> base;

    cout << "Ingresar la exponente:" ;
    cin>> exponente;

    for(int i=0; i<exponente; i++)
    {
    potencia*=base;    }

    cout<<"La potencia es:"<<potencia<<"\n";
    return 0;
}
