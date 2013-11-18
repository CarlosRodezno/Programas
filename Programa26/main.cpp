#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar la base y el exponente usando un procedimiento.
Luego calcular la base y el exponente usando una funcion.
Luego preguntar si desea continuar usando una funcion para devolver una respuesta S o N validada.
*/

char respuesta()
{
    char resp;
    do
    {
        cout<<"Desea continuar...:";
        cin.get(resp);
    }while((resp!='s') and (resp!='n'));
    return resp;
}
void ingreso(int &base, int &expo)
{
    cout <<"Ingresar la base..:";
    cin>>base;
    cout << "Ingresar exponente:" ;
    cin>> expo;
}
int potencia(int base, int expo)
{
    int pot=1;
    for(int i=0;i<expo;i++)
    {
        pot*=base;
    }
    return pot;
}

int main()
{   char resp;
    int base, expo, poten;
    do
    {
      ingreso(base,expo);
      poten=potencia(base,expo);
      _flushall();
      cout <<"Potencia es..:"<<poten<<"\n";
      resp=respuesta();
    }while(resp!='n');

    return 0;
}
