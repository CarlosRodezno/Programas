#include <iostream>

using namespace std;
/*
Elaborar un programa donde se declare la siguiente estructura
Nombre,Horas, hn,he,pn,pe,pb,ihss y tp.
Se tiene que elaborar un procedimiento para ingresar los datos al registro, luego debemos calcular
las hn,he,pn,pe,pb,ihss y tp un procedimiento las horas normales son las primeras 40 y las demas extras
se tiene que elaborar una funcion para determinar el seguro social
donde solo se ingrese el pago bruto que es parte de la estructura y nos devuelve el ihss
emplex.ihss=seguro(empplex.pb)
luego presentar los datos usando un procedimiento
*/
int seguro(int pb)
{
    if (pb>7000)
        return 245;
    else
        return 0.035*pb;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
