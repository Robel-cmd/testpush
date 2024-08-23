#include<iostream>
#include<limits>
using namespace std;
int main()
{
	cout<<"hola mundo en c++"<<endl;
	cout<<"maximo entero: "<<numeric_limits<int>::max ()<<endl;
	cout<<"minimo entero: "<<numeric_limits<int>::min ()<<endl;
	cout<<"hola"<<"estoy probando"<<"poner una secuencia de texto"<<"con signos menores"<<endl;
	/*esto es un comentario*/
	char c;
	float f;
	cout<<"ingrese un texto ";
	cin>>c;
	cout<<"ingrese un numero real ";
	cin>>f;
	
	cout<<"caracter: "<<c<<" numero real: "<<f<<endl;		
	return 0;
}
