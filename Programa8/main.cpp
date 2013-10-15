#include <iostream>

using namespace std;
/*
se tiene que ingresar el nombre, la nota y el progreso del alumno y el programa debera de presentar la observacion usando la siguiente tabla:
1-59 reprobado
60-80 bueno
81-90 Muy bueno
91-100 sobresaliente

usar condiciones donde apliquemos el and
*/
int main()
{   char nombre[30];
    int nota;
    cout << "Ingresar nombre del alumno..>";
    cin>> nombre;

    cout << "Ingresar nota del alumno..>";
    cin>> nota;

    if ((nota>=0) and (nota<=59))
    {
        cout<<"Reprobado"<<"\n";
    }
    else if ((nota>=60 and (nota<=80)))
    {
        cout<<"Bueno"<<"\n";
    }
    else if ((nota>=81) and (nota<=90))
    {
        cout<<"Muy Bueno"<<"\n";
    }
    else
    {
        cout<<"Sobresaliente"<<"\n";
    }


    return 0;
}
