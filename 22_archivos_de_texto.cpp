#include<iostream>
using namespace std;

int main(){
	//system("start chrome https://www.califik.com");
	int opcion;
	
	do{
		system("cls"); //limpiar la pantalla
		cout << "DIARIO" << endl;
		cout << "1) Agregar entrada al diario" << endl;
		cout << "2) Mostrar todo el diario" << endl;
		cout << "3) Borrar todo el diario" << endl;
		cout << "4) Salir" << endl;
		cout << "Digitar la opcion deseada: ";
		cin >> opcion;
		
		system("pause"); //hacer una pausa
	}while(opcion != 4);
	
	return 123;
}
