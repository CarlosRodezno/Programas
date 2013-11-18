#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int num, sumadigitos;
int ingreso()
{   int numero;
    do
    {
        cout<<"Ingresar un Numero..:";
        cin>>num;
    }while(!(((num % 2)==0) or ((num % 5)==0)));

    return num;
}

int sumadigitos(int num)
{   int sumadigitos;
    while(num>0)
    {
        num=num/10;
        sumadigitos++;
    }
    return sumadigitos;
}
void presentar(int sumadigitos)
{
    cout<<"La suma de las cifras es..:"<<sumadigitos<<"\n";
}

int main()
{
    for(int i=0;i<5;i++)
    {
        num=ingreso();
        sumadigitos()

        ingreso(num);
        calcular(num, sumadigitos);
        presentar(sumadigitos);
    }
    return 0;
}
