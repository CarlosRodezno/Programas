#include <iostream>

using namespace std;
/*
Ingresar 10 numeros al final presentar cuantos numeros fueron divisibles entre 5, el promedio de los divisible entre 5
y el numero mayor de todos los numeros
*/

int main()
{   int suma5, num, ndiv5, promndiv5, nmayor;
     suma5=0;
     ndiv5=0;
     promndiv5=0;
     nmayor=0;

    for(int i=0;i<10;i++)
    {   cout << "Ingrese numero:";
        cin>>num;

        if((num % 5)==0)
        {
            suma5+=num;
            ndiv5++;
        }

        if(num>nmayor)
            nmayor=num;

    }
    if (suma5!=0)
        {
            promndiv5=suma5/ndiv5;
        }
    else
        {
            promndiv5=0;
        }

    cout<<"Numeros divisibles entre 5:"<<ndiv5<<"\n";
    cout<<"El promedio de los numeros divisibles entre cinco es:"<<promndiv5<<"\n";
    cout<<"Numero mayor es:"<<nmayor<<"\n";

    return 0;
}
