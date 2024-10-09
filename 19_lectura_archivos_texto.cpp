#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//Leer un archivo de texto
	//estructura de datos para leer archivos
	fstream archivo;
	
	//ejecutar la apertura de el archivo
	//note que ios:in indica que vamos a abrir el archivo para leerlo
	archivo.open("ejemplo_24mil.txt", ios::in );
	
	//validar si el archivo se pudo abrir
	if( archivo.is_open() ){
		cout << "Se pudo abrir el archivo." << endl;
	}
	else
		cout << "El archivo no existe o no tiene permiso para abrirlo." << endl;
	
	return 777;
}
