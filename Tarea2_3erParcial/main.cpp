#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
const int lin=3;
const int col=3;
char num[lin][col]={'1','2','3','4','5','6','7','8','9'};

void presentar()
{
	cout << "     |     |     " << "\n";
	cout << "  " << num[0][0] << "  |  " << num[0][1] << "  |  " << num[0][2] << "\n";

	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";

	cout << "  " << num[1][0] << "  |  " << num[1][1] << "  |  " << num[1][2] << "\n";

	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";

	cout << "  " << num[2][0] << "  |  " << num[2][1] << "  |  " << num[2][2] << "\n";

	cout << "     |     |     " << "\n" << "\n";
}

int combinaciones()
{
	if (num[0][0] == num[0][1] and num[0][1] == num[0][2])
		return 1;

	else if (num[1][0] == num[1][1] and num[1][1] == num[1][2])
		return 1;

	else if (num[2][0] == num[2][1] and num[2][1] == num[2][2])
		return 1;

	else if (num[0][0] == num[1][0] and num[1][0] == num[2][0])
		return 1;

	else if (num[0][1] == num[1][1] and num[1][1] == num[2][1])
		return 1;

	else if (num[0][2] == num[1][2] and num[1][2] == num[2][2])
		return 1;

	else if (num[0][0] == num[1][1] and num[1][1] == num[2][2])
		return 1;

	else if (num[0][2] == num[1][1] and num[1][1] == num[2][0])
		return 1;

	else if (num[0][0] != '1' and num[0][1] != '2' and num[0][2] != '3' and num[1][0] != '4' and
        num[1][1] != '5' and num[1][2] != '6'and num[2][0] != '7' and num[2][1] != '8' and num[2][2] != '9')
		return 0;

	else
		return -1;
}

int main()
{
    int pos,i;
    char marca;

    presentar();
    do
	{
        do
        {
		cout<<"Ingrese Marca [X,0]..:";
        cin.get(marca);
        _flushall();
        } while (marca!='X' and marca != '0');

		do
        {
		cout<<"Ingrese la Posicion : ";
		cin>>pos;
		_flushall();
        } while (pos>9 and pos<0);

		if (pos==1 and num[0][0]=='1')
          num[0][0]= marca;

		else if (pos==2 and num[0][1]=='2')
			num[0][1] = marca;

		else if (pos==3 and num[0][2]=='3')
			num[0][2] = marca;

		else if (pos== 4 and num[1][0]=='4')
			num[1][0] = marca;

		else if (pos==5 and num[1][1]=='5')
			num[1][1] = marca;

		else if (pos==6 and num[1][2]=='6')
			num[1][2] = marca;

		else if (pos==7 and num[2][0]=='7')
			num[2][0] = marca;

		else if (pos==8 and num[2][1]=='8')
			num[2][1] = marca;

		else if (pos==9 and num[2][2]=='9')
			num[2][2] = marca;

		else
        cout<<"  Movimiento no valido";
        cout<<"\n";
		presentar();
		i=combinaciones();
	}while(i==-1);

	if(i==1)
		cout<<"Ganador!!";
	else
		cout<<"Empate!!";
    return 0;
}
