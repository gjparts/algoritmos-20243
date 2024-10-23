/*Funciones en C++
Una funcion es un programa que se puede llamar
desde otro programa.
->conceptos importantes:
@ firma de funcion (signature): esta formada por el tipo de dato y
								el nombre de la funcion, asi como por
								los tipos de dato de sus parametros.
@ sobrecarga de funciones:		dos o mas funciones con el mismo nombre; pero diferente firma
-> No es permitido declarar dos funciones con la misma firma en el mismo ambito.
formas de declarar funciones en C++
1) usando prototipado
2) sin usar prototipado:
	a) en el mismo archivo
	b) en un archivo externo*/
//FUNCIONES USANDO PROTOTIPADO
/*consiste en declarar antes de main las firmas de las funciones (encabezado)
y despues de main se hace la implementacion (cuerpo)
el objetivo es que el programador sepa el catalogo de funciones sin necesidad
de recorrer todo el codigo.*/
#include<iostream>
#include<cmath>
using namespace std;

//prototipos de funcion
int sumar(int a, int b);
//int sumar(int x, int y);
int sumar(int a, int b, int c);
double sumar(double a, double b);
double sumar(double a, int b, float c);
int productoDeTres(int a, int b, int c);
//devuelve el resultado de la cuadratica, resultado puede ser 1 o 2
double cuadratica(double a, double b, double c, int resultado);

int main(){
	cout << sumar(5,8) << endl;
	cout << productoDeTres(1,2,5) << endl;
	cout << productoDeTres(5,6,4) << endl;
	cout << cuadratica(1,4,1,1) << endl;
	cout << cuadratica(1,4,1,2) << endl;
	cout << cuadratica(5,7,8,1) << endl;
	cout << cuadratica(0,0,1,1) << endl;
	cout << sumar(5,8,1) << endl;
	cout << sumar(2.5,1.8) << endl;
	
	return 123;
}

//implementacion de los prototipos
int sumar(int a, int b){
	return a+b;
}
int productoDeTres(int a, int b, int c){
	return a*b*c;
}
double cuadratica(double a, double b, double c, int resultado){
	//devuelve el primer resultado de la ecuacion cuadratica
	if( resultado == 1 )
		return ( (-b+sqrt(b*b-4*a*c))/(2*a) );
	else
		return ( (-b-sqrt(b*b-4*a*c))/(2*a) );
}
int sumar(int a, int b, int c){
	return a+b+c;
}
double sumar(double a, double b){
	return a+b;
}
double sumar(double a, int b, float c){
	return a+b+c;
}
/*
int sumar(int x, int y){
	return x+y;
}
*/





