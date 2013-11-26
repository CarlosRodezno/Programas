#include <iostream>

using namespace std;
/*
Ingresar el nombre del empleado, las horas trabajadas, el turno, luego determinar las horas normales que son las primeras 40
y las extras que son las mayores a 40.
Debera obtener pago por hora usando el turno, luego un bono, el pago bruto que son las suma de los pagos normales y extras, ihss
y total a pagar.

turno pn  pe
1     100 130
2     135 140
3     140 150

Bono si el empleado es de turno 1 y trabajo mas de 45 horas el bono es de 300 y si no es de 100
Para calcular el seguro el pago bruto mayor a 7000 es 245 y si no el pago bruto por 3.5%
*/

int main()
{   int  horas, turno, horasn, horasx, pn, pe, bono;
    char nombre [30];
    double ihss, tp, pb;


    cout << "ingresar el nombre..>" ;
    cin.getline(nombre,30);

    cout <<"ingresar el turno 1,2,3..>";
    cin>> turno;

    cout<<"ingresar las horas..";
    cin>> horas;

    if (horas>40)
    {
        horasn=40;
        horasx=horas-40;
    }
    else
    {
        horasn=horas;
        horasx=0;
    }

    if (turno==1)
    {
        pn=100*horasn;
        pe=130*horasx;
    }
    else if (turno==2)
    {
        pn=135*horasn;
        pe=140*horasx;
    }
    else if (turno==3)
    {
        pn=140*horasn;
        pe=150*horasx;
    }
    else
    {
        pe=0;
        pn=0;
    }

    if((turno==1) and (horas>45))
    {
        bono=300;
    }
    else
    {
        bono=100;
    }


    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=0.035 * pb;
    }
    tp=pb-ihss;
    pb=pn+pe+bono;
    cout<<"Pago por hora:" <<pn<<"\n";
    cout<<"Pago bruto:" <<pb<<"\n";
    cout<<"Seguro social:" <<ihss<<"\n";
    cout<<"Bono:" <<bono<<"\n";
    cout<<"total a pagar:" <<tp<<"\n";
    cout<<"Horas:" <<horas<<"\n";
    cout<<"Horas Normales:" <<horasn<<"\n";
    cout<<"Horas Extras:" <<horasx<<"\n";




    return 0;
}
