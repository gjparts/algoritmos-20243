#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	/*Hacer un programa que solicite al usuario digitar dos
	cadenas de texto, una vez capturadas que el programa diga
	si son iguales o si son diferentes; pero ignorando mayusculas
	y minusculas y SIN alterar las dos cadenas de texto leidas.*/
	string a,b;
	cout << "Digitar primer string: ";
	getline(cin,a);
	cout << "Digitar segundo string: ";
	getline(cin,b);
	
	//hacer una copia de los string para no afectar los originales
	string copiaA = a, copiaB = b;
	//realizar la misma transformacion a ambas copias:
	transform(copiaA.begin(),copiaA.end(),copiaA.begin(), ::tolower );
	transform(copiaB.begin(),copiaB.end(),copiaB.begin(), ::tolower );
	
	if( copiaA == copiaB )
		cout << "ambos string son iguales si ignoramos la capitalizacion.";
	else
		cout << "ambos string son diferentes.";

	cout << endl;	
	return 876;
}
