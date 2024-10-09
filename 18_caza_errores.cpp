#include<iostream>
using namespace std;

int main(){
	/*Hacer un programa que calcule e imprima el promedio de 3 numeros double
	digitados por el usuario.
	Validar que los valores digitados sean numeros si es asi entonces
	imprimir el promedio, de lo contrario imprimir un mensaje
	indicando que alguno de los valores proporcionados no es numero.*/
	double a,b,c, promedio;
	string str1, str2, str3;
	//lectura
	cout << "Digitar primer valor: ";
	getline(cin,str1);
	cout << "Digitar segundo valor: ";
	getline(cin,str2);
	cout << "Digitar tercer valor: ";
	getline(cin,str3);
	//conversion y calculo
	try{
		a = stoi(str1);
		b = stoi(str2);
		c = stoi(str3);
		
		//calculo del promedio
		promedio = (a+b+c)/3;

		cout << "El promedio es: " << promedio << endl;
	}catch(exception ex){
		cout << "Alguno de los valores proporcionados no es un numero" << endl;
	}
	
	
	
	return 123;
}
