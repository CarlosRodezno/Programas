#include <iostream>

using namespace std;
/*
Ingresar 5 numeros y determinar cuantos son divisibles entre 3 y determinar el promedio.
*/

int main()
{   int numero, cdiv3, prom3, suma3 ;
    cdiv3=0;
    suma3=0;
    prom3=0;

    for(int i=0;i<5;i++)
    {
        cout<<"Ingresar un numero entero";
        cin>> numero;
        if((numero% 3)==0)
        {
            suma3+=numero;
            cdiv3++;
        }
        if (suma3!=0)
        {
            prom3=suma3/cdiv3;
        }
        else
        {
            prom3=0;
        }
    }
    cout<<"Contador de numero divisibles entre tres"<<cdiv3<<"\n";
    cout<<"El promedio de los numeros divisibles entre tres es"<<prom3<<"\n";
    return 0;
}
