#include<iostream>
using namespace std;

int main(){
	/*Bug que sucede cuando se viene de leer cualquier numero
	y luego queremos leer un string mediante la consola del sistema*/
	//reproduccion del problema:
	int x;
	string y;
	
	cout << "Digite un numero entero para x: ";
	cin >> x;
	
	cout << "Digite un string para y: ";
	//cuando se viene de leer numeros en la consola (cin) y desea leer un string
	//entonces debe vaciar el buffer de entrada ejecutando el comando:
	cin.ignore();
	//luego ya puede ejecutar el getline:
	getline(cin,y);
	
	cout << "El valor de x es " << x << endl;
	cout << "El valor de y es " << y << endl;
	
	return 456;
}
