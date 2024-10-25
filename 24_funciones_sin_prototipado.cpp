/*FUNCIONES SIN USAR PROTOTIPADO
consiste en definir la funcion completa antes de main (firma y cuerpo)*/
#include<iostream>
#include<cmath>
using namespace std;

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

