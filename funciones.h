//en los archivos .h no debe haber funcion main()
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
