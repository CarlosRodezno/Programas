#include <iostream>

using namespace std;
/*
Cree un programa donde inserte 3 numeros y sume sus cifras.
*/

int main()
{   int numero, suma;
    suma=0;

    cout << "Ingrese un Numero:";
    cin>>numero;

    while (numero>0) //siempre que el numero sea mayor que 0 se repetira el ciclo.
    {
       suma= suma + (numero % 10);
       numero=numero/10;
       /*
       Divide el numero entre 10 y devuelve el ultimo numero del residuo, luego resude el numero en 10
       y hace el mismo proceso hasta que el numero es 0.
       */
    }
    cout<<"El resultado es:"<<suma;
    return 0;
}
