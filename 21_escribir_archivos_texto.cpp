#include<iostream>
#include<fstream>
using namespace std;

int main(){
	/*escritura de archivos de texto*/
	fstream archivo;
	
	/*para abrir un archivo en modo escritura hay dos modos:
	ios::out	sobreescribe el archivo perdiendo todo lo que estaba antes (OUTPUT)
	ios::app	agrega una linea al final del archivo sin perder lo que ya estaba (APPEND)*/
	archivo.open("libreta.txt", ios::out);
	/*cuando se ejecuta open para operaciones de escritura, si el archivo no existe
	entonces c++ lo crea. q*/
	
	//siempre validemos que el archivo se pudo abrir para escritura
	if( archivo.is_open() ){
		//todo correcto: probemos escribir en el archivo
		archivo << "Hola Gerardo" << endl;
		archivo << 2+2 << endl;
		float a = 3.1416;
		archivo << "El valor de a es " << a << endl;
		archivo << "Melon\tSandia\tUva\tNaranja" << endl;
		archivo.close(); //cerrar el archivo
	}
	else
		cout << "No se puede abrir el archivo para escritura o no tiene permiso" << endl;
	
	return 111;
}
