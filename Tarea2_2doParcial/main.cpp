#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//Carlos Rodezno 21141200!!

int dia,mes,year;
char signo[30];
int acuario=0,piscis=0,aries=0,tauro=0,geminis=0,cancer=0,leo=0,virgo=0,libra=0,escorpion=0,sagitario=0,capricornio=0;

void ingresar(int &dia,int &mes,int &year)
{
    do
    {
        cout<<"Ingrese el dia..:";
        cin>>dia;
    }while (!((dia>=1) or (dia<=31)));

    do
    {
        cout<<"Ingrese el mes..:";
        cin>>mes;
    }while (!((mes>=1) or (mes<=12)));

    cout<<"Ingrese el Año..:";
    cin>>year;
}
void calcular(int dia,int mes,int &acuario,int &piscis,int &aries,int &tauro,int &geminis,int &cancer,int &leo,int &virgo,int &libra,int &escorpion,int &sagitario,int &capricornio,char signo[])
{
    if (((mes==1) and ((dia>20) and (dia<32))) or ((mes==2) and ((dia>0) and (dia<21))))
    {
        strcpy(signo,"Acuario");
        acuario++;
    }
    if (((mes==2) and ((dia>18) and (dia<29))) or ((mes==3) and ((dia>0) and (dia<21))))
    {
        strcpy(signo,"Piscis");
        piscis++;
    }
    if (((mes==3) and ((dia>20) and (dia<32))) or ((mes==4) and ((dia>0) and (dia<21))))
    {
        strcpy(signo,"Aries");
        aries++;
    }
    if (((mes==4) and ((dia>20) and (dia<31))) or ((mes==5) and ((dia>0) and (dia<22))))
    {
        strcpy(signo,"Tauro");
        tauro++;
    }
    if (((mes==5) and ((dia>21) and (dia<32))) or ((mes==6) and ((dia>0) and (dia<22))))
    {
        strcpy(signo,"Geminis");
        geminis++;
    }
    if (((mes==6) and ((dia>21) and (dia<31))) or ((mes==7) and ((dia>0) and (dia<23))))
    {
        strcpy(signo,"Cancer");
        cancer++;
    }
    if (((mes==7) and ((dia>22) and (dia<31))) or ((mes==8) and ((dia>0) and (dia<24))))
    {
        strcpy(signo,"Leo");
        leo++;
    }
    if (((mes==8) and ((dia>23) and (dia<32))) or ((mes==9) and ((dia>0) and (dia<24))))
    {
        strcpy(signo,"Virgo");
        virgo++;
    }
    if (((mes==9) and ((dia>23) and (dia<31))) or ((mes==10) and ((dia>0) and (dia<24))))
    {
        strcpy(signo,"Libra");
        libra++;
    }
    if (((mes==10) and ((dia>23) and (dia<32))) or ((mes==11) and ((dia>0) and (dia<23))))
    {
        strcpy(signo,"Escorpion");
        escorpion++;
    }
    if (((mes==11) and ((dia>22) and (dia<31))) or ((mes==12) and ((dia>0) and (dia<22))))
    {
        strcpy(signo,"Sagitario");
        sagitario++;
    }
    if (((mes==12) and ((dia>21) and (dia<32))) or ((mes==1) and ((dia>0) and (dia<21))))
    {
        strcpy(signo,"Capricornio");
        capricornio++;
    }
}
void presentar(char signo[])
{
    cout<<"El signo es..:"<<signo<<"\n";
}
int main()
{char resp;
    do
    {
        ingresar(dia,mes,year);
        calcular(dia,mes,acuario,piscis,aries,tauro,geminis,cancer,leo,virgo,libra,escorpion,sagitario,capricornio,signo);
        presentar(signo);

        _flushall();

        do
        {
            cout<<"Desea continuar ...:";
            cin.get(resp);
            _flushall();

        }while ((resp !='S') and  (resp !='N'));

        _flushall();


    } while (resp !='N');

    cout<<"Acuario...:"<<acuario<<"\n";
    cout<<"Piscis...:"<<piscis<<"\n";
    cout<<"Aries...:"<<aries<<"\n";
    cout<<"Tauro...:"<<tauro<<"\n";
    cout<<"Geminis...:"<<geminis<<"\n";
    cout<<"Cancer...:"<<cancer<<"\n";
    cout<<"Leo...:"<<leo<<"\n";
    cout<<"Virgo...:"<<virgo<<"\n";
    cout<<"Libra...:"<<libra<<"\n";
    cout<<"Escorpion...:"<<escorpion<<"\n";
    cout<<"Sagitario...:"<<sagitario<<"\n";
    cout<<"Capricornio...:"<<capricornio<<"\n";

    return 0;
}
