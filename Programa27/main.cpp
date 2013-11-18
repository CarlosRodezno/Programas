#include <iostream>

using namespace std;
/*
Elaborar un procedimiento para ingresar un
numero entre 1-10.
Luego determinar el factorial del numero ingresado
usando una funcion.
Hacerlo para 5 numeros (usar ciclo for).
*/

void ingreso(int &numero)
{

    cout <<"Ingresar el numero   = "  ;
    cin>>numero;

}

int factorial(int numero)
{int factorial;
numero=0;
    while (numero>0)
    {
        factorial=numero-1*numero;
    }


    return factorial;
}
void presentar(int factorial)
{
    cout<<"El factorial del numero es..:"<<factorial<<"\n";
}

int main()
{ int numero,factorial;

 for(int i=0;i<5;i++)
    {

    ingreso(numero);
        presentar(factorial);
    }

    return 0;
}
