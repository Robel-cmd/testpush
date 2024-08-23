#include<iostream>

using namespace std;

int main()
{
// declarar varibale
int numero_uno;
int numero_dos;
int suma, resta, multiplicacion, division;

// entradade datos
cout<<"ingrese un numero: ";
cin>>numero_uno;
cout<<"ingrese un segundo numero: ";
cin>>numero_dos;

// operar variables
suma = numero_uno + numero_dos;
resta = numero_uno - numero_dos;
multiplicacion = numero_uno * numero_dos;
division = numero_uno / numero_dos;

// salida de datos
cout<<"suma: "<<suma<<endl;
cout<<"resta: "<<resta<<endl;
cout<<"multiplicacion: "<<multiplicacion<<endl;
cout<<"division: "<<division<<endl;
	return 0;
}

