#include<iostream>
#include<stdexcept> //aqui la vamos a necesitar para recuperar cualquier excepcion
#include "CuentaAhorro.h"
using namespace std;

int main(){
	CuentaAhorro *c1 = new CuentaAhorro("Gerardo");
	int opcion;
	
	do{
		system("cls");
		cout << "Bienvenido " << c1->cliente << endl;
		cout << "1) Depositar" << endl;
		cout << "2) Retirar" << endl;
		cout << "3) Consultar Saldo" << endl;
		cout << "4) Salir" << endl;
		cout << "Digite la opcion deseada: ";
		cin >> opcion;
		
		if(opcion == 1){
			cout << "Digite el monto a depositar: ";
			float monto;
			cin >> monto;
			try{
				c1->depositar(monto);
			}catch(exception &ex){
				cout << ex.what() << endl; //mostrar la excepcion
			}
		}
		
		if(opcion == 2){
			cout << "Digite el monto a retirar: ";
			float monto;
			cin >> monto;
			try{
				c1->retirar(monto);
			}catch(exception &ex){
				cout << ex.what() << endl; //mostrar la excepcion
			}
		}
		
		if( opcion == 3 ){
			cout << "****************************" << endl;
			cout << "Monto disponible: " << c1->getSaldo() << endl;
			cout << "****************************" << endl;
		}
		
		system("pause"); //hacemos una pausa antes de limpiar la pantalla
	}while(opcion != 4);
	
	return 678;
}




