#include<iostream>
#include "30_apuntadores3.h"
using namespace std;

int main(){
	int numeros[] = {4, 8, 5, 7, 111, -7, 90, 0};
	imprimirArreglo(numeros,end(numeros)-begin(numeros));
	//recuperden que un arreglo es una coleccion de apuntadores
	//no olviden que si se imprimir el arreglo lo que devuelve
	//es la direccion de memoria del primer elemento.
	//por lo tanto el arreglo no necesita del ampersan (&) para
	//devolvernos su direccion de memoria (referencia)
	cout << "Direccion de memoria de numeros: " << numeros << endl;
	
	double valores[] = {5, 8, 4.5, 8.75, 100, 45, -7};
	arregloMitad(valores,end(valores)-begin(valores)); //regla 4
	imprimirArreglo(valores,end(valores)-begin(valores));
	
	double cifras[] = {5, 7, 12, 9, 8, 3, 20};
	imprimirArreglo(cifras,end(cifras)-begin(cifras));
	arregloCuadrado(cifras,end(cifras)-begin(cifras));
	imprimirArreglo(cifras,end(cifras)-begin(cifras));
	
	int enteros[10];
	llenarArregloAzar(enteros,end(enteros)-begin(enteros),7,23);
	imprimirArreglo(enteros,end(enteros)-begin(enteros));
	
	return 765;
}





