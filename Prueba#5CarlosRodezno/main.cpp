#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct empleado
{
    char nombre[30];
    double turno,porc,ventas,comision,ihss,tp;
};
void ingrese(empleado &emple)
{
    cout<<"Ingrese Nombre del Empleado..:";
    cin.getline(emple.nombre,30);

    cout<<"Ingrese las Ventas del Empleado..:";
    cin>>emple.ventas;
    _flushall();
    do
    {
        cout<<"Ingrese el Turno del Empleado..:";
        cin>>emple.turno;
    }while(!((emple.turno>=1) and (emple.turno<=3)));
}
double porcomision(double turno)
{
    if (turno==1)
    {
        return 0.03;
    }
    else if (turno==2)
    {
        return 0.05;
    }
    else
    {
        return 0.06;
    }
}
double seguroSocial(double ventas)
{
    if (ventas>7000)
    {
        return 245;
    }
    else
    {
        return 0.035*ventas;
    }
}
void calcular (empleado &emple)
{
    emple.porc=porcomision(emple.turno);
    emple.comision=emple.porc*emple.ventas;
    emple.ihss=seguroSocial(emple.ventas);
    emple.tp=emple.comision-emple.ihss;
}
void presentar(empleado emple)
{
    cout<<"Nombre del Empleado..:"<<emple.nombre <<"\n";
    cout<<"El # Turno es el..:"<<emple.turno <<"\n";
    cout<<"Porcentaje de Comision Obtenida..:"<< emple.porc<<"\n";
    cout<<"Comision Ganada..:"<<  emple.comision<<"\n";
    cout<<"Ihss..:"<<emple.ihss  <<"\n";
    cout<<"Total a pagar..:"<<emple.tp <<"\n";
}
empleado emple;
int main()
{
    ingrese(emple);
    calcular(emple);
    presentar(emple);
return 0;
}
