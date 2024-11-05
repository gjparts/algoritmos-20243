#include<iostream>
using namespace std;

void sumar(int x){
	x = x + 100;
}

/*observe que en el parametro x colocamos un signo asterisco luego
del tipo de dato, esto indica que lo que esperamos es una direccion
de memoria o referencia, no un valor.*/
//en este caso espero la direccion de memoria de una variable entera:
void sumarUsandoApuntador(int *x){
	//cuando la varible apuntada es de un tipo de dato primitivo
	//debemos colocar el signo asterisco antes del nombre de la variable.
	*x = *x + 100;
}

int main(){
	int x = 5;
	sumar(x);
	cout << x << endl;
	/*observe que la x declarada en main() no es la misma
	x que declaramos en xumar(). Por lo tanto x en main()
	sigue siendo 5.
	Para poder alterar a x declarada en main() desde un
	ambito externo vamos a ocupar el uso de apuntadores.*/
	
	/*APUNTADOR: tambien conocidos como pointers o punteros, son
	los que permiten pasar una variable de un ambito a otro permitiendo
	que cualquier cambio que se haga en un ambito externo afectara
	a la variable en el ambito original. A esto se le conoce como:
	pase por referencia (byref pass)*/
	//antes debera conocer que una variable en c++
	//tiene dos componentes:
	//el valor:
	cout << "el valor de x es: " << x << endl;
	//la direccion de memoria (reference, referencia, offset):
	cout << "la referencia o direccion en memoria de x es: " << &x << endl;
	
	//prueba de la funcion con apuntador:
	sumarUsandoApuntador(&x);
	cout << "El valor de x es: " << x << endl;
	
	return 777;
}






