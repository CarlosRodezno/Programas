#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int num;
void ingreso (int &num)
{
    do
    {
        cout<<"Ingresar un Numero..:";
        cin>>num;
    }while(!(((num % 2)==0) or ((num % 5)==0)));


}

void calcular(int num, int&sumadigitos)
{
    while(num>0)
    {
        num=num/10;
        sumadigitos++;
    }
}
void presentar(int sumadigitos)
{
    cout<<"La suma de las cifras es..:"<<sumadigitos<<"\n";
}

int main()
{
    for(int i=0;i<5;i++)
    {
        int sumadigitos=0;

        ingreso(num);
        calcular(num, sumadigitos);
        presentar(sumadigitos);
    }
    return 0;
}
