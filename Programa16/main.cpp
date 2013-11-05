#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar un programa donde ingresemos un numero y luego preguntar si deseamos ingresar otro.
Al finalizar presentar la suma de los numeros ingresados. Los numeros deberan estar entre 1 y 100.
*/

int main()
{   int numero, suma;
    char resp;
    suma=0;

    do
    { do
        {
            cout<<"Ingresar un numero entre 1-100..:";
            cin>> numero;
        }while((numero<1) or (numero>100));
        _flushall();
        do
        {
            cout<<"Desea Continuar?";
            cin.get(resp);
        }while ((resp!='N') and (resp!='S'));
        suma+=numero;

    }while(resp!='N');
     cout<<"Final del Programa";
     cout<<"Suma es:"<<suma<<"\n";

    return 0;
}
