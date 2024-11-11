#include<iostream>
#include "31_apuntadores4.h"
using namespace std;

int main(){
	string nombre = "Gerardo Josue Portillo";
	cout << "nombre antes: " << nombre << endl;
	mayusculas(&nombre); //regla 4
	cout << "nombre despues: " << nombre << endl;
	
	string str = "UNAH Cortes Ingenieria en Sistemas";
	cout << "nombre antes: " << str << endl;
	reemplazarGuionesPorEspacios(&str); //regla 4
	cout << "nombre despues: " << str << endl;
	
	return 987;
}
