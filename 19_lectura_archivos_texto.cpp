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
		int n = 0; //contador de lineas
		
		cout << "Se pudo abrir el archivo." << endl;
		//recorrer el archivo linea por linea hasta llegar al final del mismo
		//vamos a imprimir cada linea en la pantalla
		string linea; //variable para depositar la linea recien leida en el archivo
		//mientras el arxhivo no reporte eof() (END OF FILE) entonces vamos a repetir
		while( !archivo.eof() ){
			//!archivo.eof() es lo mismo que decir archivo.eof() == false
			//para lograr llegar a eof hay que leer cada linea:
			getline(archivo, linea);
			cout << linea << endl; //imprimir la linea recien leida
			n++;
		}
		cout << "Lineas en el archivo: " << n << endl;
		//una vez terminamos de ocupar el archivo es una buena practica cerrarlo
		archivo.close();
	}
	else
		cout << "El archivo no existe o no tiene permiso para abrirlo." << endl;
	
	return 777;
}





