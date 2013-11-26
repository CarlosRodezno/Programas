#include <iostream>

using namespace std;
const int tam=4;
int arreglo[4];

void ingreso(int arreglo[])//Procedimiento para ingresar numero.
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"Ingresar un numero...:";
        cin>>arreglo[i];
    }
}
void ascedente(int arreglo[])//Procedimiento para declarar el orden de los numeros ascendente.
{
    int temp;
    for (int j=0;j<5;j++)
    {
        for (int i=0;i<=tam-1;i++)
        {
            if (arreglo[i+1] < arreglo[i])
            {
                temp=arreglo[i];
                arreglo[i]=arreglo[i+1];
                arreglo[i+1]=temp;
            }
        }
    }
}
void descendente (int arreglo[])//Procedimiento para declarar el orden descendente.
{
    int temp;
    for (int j=0;j<5;j++)
    {
        for (int i=0;i<=tam;i++)
        {
            if (arreglo[i+1] > arreglo[i])
            {
                temp=arreglo[i];
                arreglo[i]=arreglo[i+1];
                arreglo[i+1]=temp;
            }
        }
    }
}
void modificarArreglo(int arreglo[])//Procedimiento para convetir a 0 los numeros pares.
{
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]%2==0)
        {
            arreglo[i]=0;
        }
    }
}
int main()
{
    ingreso(arreglo);//Ingresar los procedimientos.
    ascedente(arreglo);
    cout<<"Numeros Ordenados Ascedentemente...:";
    for (int j=0;j<=tam;j++)
    {
        cout<< arreglo[j] <<", ";
    }
    cout<<"\n";
    descendente(arreglo);
    cout<<"Numeros Ordenados Descendentemente...:";
    for (int j=0;j<=tam;j++)
    {
        cout<< arreglo[j] <<", ";
    }
    cout<<"\n";
    modificarArreglo(arreglo);
    cout<<"Numeros Pares Convertidos a Cero...:";
    for (int j=0;j<=tam;j++)
    {
        cout<< arreglo[j] <<", ";
    }
    cout<<"\n";
    return 0;
}
