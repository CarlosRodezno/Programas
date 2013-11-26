#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{   int numero, nmayor, nmenor;
    char respuesta;
    nmayor=0;
    nmenor=1000000;

    do
    {
        {
            cout<<"Ingrese un Numero..:";
            cin>> numero;
            _flushall();

        }while(!((numero>50) and (numero<150)) and ((numero%2) !=0));

        cout<<"Desea Continuar..:";
        cin.get(respuesta);
        _flushall();

        if (numero>nmayor)
            {
            nmayor=numero;
            }

        if (numero<nmenor)
            {
            nmenor=numero;
            }



   }while((respuesta !='n') and (respuesta !='N'));



    cout<<"Numero Mayor es..:"<<nmayor<<"\n";
    cout<<"Numero Menor es..:"<<nmenor<<"\n";


    return 0;
}
