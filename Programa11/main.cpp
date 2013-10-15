#include <iostream>

using namespace std;
//Ingresar la cantidad de numeros que necesitamos pedir luego ingresar el numero y determinar si es par o impar al final final presentar cuantos fueron impares e pares

int main()
{   int numero, cpar, cimpar, contador, nveces;
    contador=0;
    cimpar=0;
    cpar=0;

    cout<<"Cuantos numero desea Ingresar?";
    cin>> nveces;

    while(contador<nveces)
   {
    cout << "Ingresar un Numero..>" ;
    cin>>numero;

    if(numero % 2==0)
    {
        cout<<"El numero es par"<<"\n";
    }
    else
    {
        cout<<"El numero es Impar"<<"\n";
    }
    contador++;
   }
    cout<<"Numero de pares es"<<cpar<<"\n";
    cout<<"Numero de impares es"<<cimpar<<"\n";
    return 0;
}
