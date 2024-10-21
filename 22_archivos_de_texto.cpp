#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//system("start chrome https://www.califik.com");
	int opcion;
	fstream archivo;
	
	do{
		system("cls"); //limpiar la pantalla
		cout << "DIARIO" << endl;
		cout << "1) Agregar entrada al diario" << endl;
		cout << "2) Mostrar todo el diario" << endl;
		cout << "3) Borrar todo el diario" << endl;
		cout << "4) Salir" << endl;
		cout << "Digitar la opcion deseada: ";
		cin >> opcion;
		
		if( opcion == 1 ){
			//abrir el archivo para agregarle una linea
			string str;
			cout << "AGREGAR ENTRADA AL DIARIO ================" << endl;
			cout << "Digite el texto a agregar: ";
			cin.ignore(); //venimos de leer un numero
			getline(cin,str);
			//escribir la entrada en el archivo
			archivo.open("diario.txt", ios::app);
			if( archivo.is_open() ){
				archivo << str << endl; //escribir la linea en el archivo
				archivo.close(); //cerrar el archivo
			}
			else
				cout << "No se puede escribir en el archivo." << endl;
		}
		
		if( opcion == 2 ){
			cout << "MOSTRAR TODO EL DIARIO ================" << endl;
			//abrir el archivo para lectura
			archivo.open("diario.txt", ios::in);
			if( archivo.is_open() ){
				//imprimir el archivo y hacer una pausa cada 10 lineas.
				string linea;
				int lineas = 0; //contador de lineas para saber cuando llegue a 10 lineas
				while( !archivo.eof() ){
					getline(archivo,linea);
					cout << linea << endl;
					lineas++;
					if( lineas%10 == 0 ) system("pause");
				}
				archivo.close(); //cerrar el archivo una vez terminado de leer
			}
			else
				cout << "No se pudo leer el archivo, quiza no existe." << endl;
		}
		
		if( opcion == 3 ){
			cout << "BORRAR TODO EL DIARIO ================" << endl;
			cout << "Importante! Esta accion es irreversible." << endl;
			cout << "Desea vaciar el archivo de diario?" << endl;
			cout << "Conteste S en mayusculas para proceder" << endl;
			cout << "Conteste cualquier otra letra para cancelar" << endl;
			cout << "Su respuesta es: ";
			string respuesta;
			cin.ignore();
			getline(cin,respuesta);
			if( respuesta == "S" ){
				archivo.open("diario.txt", ios::out);
				cout << "********** ARCHIVO VACIADO **********" << endl;
				archivo.close();
			}
			else
				cout << "NO SE REALIZO NADA ********" << endl;
		}
		
		system("pause"); //hacer una pausa
	}while(opcion != 4);
	
	return 123;
}
