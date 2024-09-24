#include<iostream>
using namespace std;

int main(){
	/*string: es una coleccion de char.*/
	string x = "UNAH Cortes";
	cout << x << endl;
	cout << "longitud de x: " << x.length() << endl;
	
	//recorrer los elementos de un string (cada item es un elemento char)
	for( int i = 0; i < x.length(); i++ )
		cout << x[i] << endl;
	
	//como el string se comporta como un arreglo entonces podemos
	//reemplazarle cualquier de sus elementos char:
	x[10] = 'S';
	x[4] = '_';
	cout << "x con modificaciones: " << x << endl;
	
	//concatenar un string con otro string
	string x1 = "Sistemas";
	string x2 = "Gerardo Portillo";
	string x3 = "Me llamo "+x2+" y doy clases en "+x1;
	cout << x3 << endl;
	
	//concatenar un numero con un string
	int edad = 42;
	double salario = 10000;
	string x4 = "Soy "+x2+" y mi edad es "+to_string(edad)+" y gano "+to_string(salario);
	cout << x4 << endl;
	
	//tambien puede concatenar char a string
	string x5 = "Manzana";
	cout << x5 << endl;
	x5 = x5 + 's';
	cout << x5 << endl;
	
	return 654;
}















