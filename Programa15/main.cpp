#include <iostream>

using namespace std;

int main()
{   int num, cifra, suma, maxi, mini, prom, cont, cpar, cimpar;
    cout<<"Ingrese numero Entero:";
    cin>>num;
    suma=0;
    maxi=0;
    mini=9;
    cont=0;
    cpar=0;
    cimpar=0;
    cout<<"numero al revez:";
    while(num>0)
    {
       cifra= num % 10;
       cout<<cifra;
       num= num/10;
       suma+=cifra;
       if(cifra>maxi)
        maxi=cifra;
       if(cifra<mini)
        mini=cifra;
        cont++;
       if(cpar%2==0)
        cpar++;
       else
        cimpar++;
    }
    prom=suma/cont;
    cout<<"\n";
    cout<<"Suma de las cifras:"<<suma<<"\n";
    cout<<"Cifra Mayor:"<<maxi<<"\n";
    cout<<"Cifra Menor:"<<mini<<"\n";
    cout<<"Promedio es:"<<prom<<"\n";
    cout<<"Cifras Pares:"<<cpar<<"\n";
    cout<<"Cifras Impares:"<<cimpar<<"\n";
    return 0;
}
