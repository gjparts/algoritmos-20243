#include<iostream>
using namespace std;

int main(){
	/*Hacer un programa que pida al usuario
	digitar un numero entero.
	Si lo digitado no es un numero entonces mostrar
	un mensaje de error indicandolo de lo contrario
	imprimir el numero digitado.*/
	int numero;
	string str; //variable de captura
	
	cout << "Digite por favor un numero entero: ";
	getline(cin,str); //hacer la lectura hacia el string
	//convertir el string a numero y si esta conversion falla
	//entonces mostrarmos el mensaje de error
	try{
		numero = stoi(str);
		cout << "El numero digitado es " << numero << endl;
	}catch(exception ex){
		cout << "Lo digitado no es un numero" << endl;
	}
	
	cout << "Hasta luego amiguito" << endl;
	
	return 876;
}
