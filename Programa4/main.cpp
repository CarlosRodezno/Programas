#include <iostream>

using namespace std;
/*
Ingresar un numero y determinar si es positivo o negativo
*/

int main()
{   int numero ;
    cout << "Ingresar un numero....>" ;
    cin>> numero;

    if (numero>0)
    {
        cout<<"EL NUMERO ES POSITIVO"<<"\n";
    }
    else if (numero<0)
    {
        cout<<"EL NUMERO ES NEGATIVO"<<"\n";
    }
    else
    {
        cout<<"EL NUMERO ES CERO"<<"\n";
    }
    return 0;
}
