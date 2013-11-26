#include <iostream>
/*
Ingresar 5 numeros a un arreglo.
Los numeros deberan estar entre 50-100.
Usando una funcion debera de obtener la suma de los numeros divisibles entre 5.
Crear una funcion para determinar el promedio de los numeros pares.
Crear un procedimiento para modificar el arreglo y colocar 0 a todos los numeros que son pares.
Crear un procedimiento para presentar el arreglo.
*/
using namespace std;
const int tam=4;
int arreglo[4];
int sumaA,suma5,promedioP;

void ingreso(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        do
        {
            cout<<"Ingresar numero..:";
            cin>>arreglo[i];
        }while(!((arreglo[i]>=50) and (arreglo[i]<=100)));
    }
}
int numerosdivisibles5(int arreglo[])
{
    int suma=0;
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]%5==0)
            suma+=arreglo[i];
    }
    return suma;
}
int numerosdivisibles2(int arreglo[])
{
    int sumapar=0;
    int contador=0;
    for (int i=0;i<=tam;i++)
    {
        if(arreglo[i]%2==0)
        {
            contador++;
            sumapar+=arreglo[i];
        }
    }
    return sumapar/contador;
}

int main()
{
    ingreso(arreglo);
    suma5=numerosdivisibles5(arreglo);

    cout << "Promedio de los Pares..:"<<promedioP<<"\n";
    cout<<"La suma de los numeros divisibles entre 5 es..:"<<suma5<<"\n";
    return 0;
}
