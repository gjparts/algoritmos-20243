#include<iostream>
#include<stdexcept> //standar exception (libreria para generar excepciones)
using namespace std;

double division(double dividendo, double divisor){
	//guard clause que evita que divisor sea cero
	if( divisor == 0 )
		throw invalid_argument("divisor no puede ser cero."); //termina el programa y reporta
	
	return dividendo/divisor;
}

int main(){
	/*Guard Clauses (sentencias/instrucciones de proteccion)
	Son sentencias que protegen una funcion evitando que estas
	reciban valores incorrectos en sus parametros.
	-> Lo que hacen es generar una excepcion que es captuable
	   por medio de un bloque try-catch.
	-> El uso de excepciones es mas profesional que simplemente
	   imprimir mensajes con cout.*/
	
	//el siguiente codigo puede reportar alguna excepcion:
	try{
		cout << division(5,2) << endl;
		cout << division(7,0) << endl;
		cout << division(4,5) << endl;
	}catch(exception &ex){
		//observe que ex lleva un & en la declaracion, esto se hace
		//para tener acceso al object exception.
		cout << ex.what() << endl;
	}
	
	return 777;
}
