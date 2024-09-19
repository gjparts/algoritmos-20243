#include<iostream>
using namespace std;

int main(){
	/*Arreglo (Array)
	estructura de datos estatica, secuencial y homogenea.*/
	//ejemplo: declarar un arreglo de 5 posiciones
	int arreglo[] = {1,3,8,9,2}; //forma 1: prellenado
	int arr[5]; //forma 2: sin inicializar
	
	//un arreglo, al ser secuencial buscara que todas
	//sus posiciones queden una despues de otra en la memoria
	//si encuentra esta porcion consecutiva entonces
	//el programa crashea.
	//int numeros[5000000];
	
	//saber la posicion en memoria de un arreglo:
	cout << "posicion en memoria de arreglo: " << arreglo << endl;
	
	//imprimir los valores almacenados en arreglo:
	cout << "Valores almacenados en arreglo: " << endl;
	for( int i = 0; i < 5; i++ )
		cout << "posicion: " << i << ", valor: " << arreglo[i] << endl;
	
	//imprimir las posiciones de memoria de cada elemento de arreglo
	cout << "Direcciones de memoria para arreglo: " << endl;
	for( int i = 0; i < 5; i++ )
		cout << "posicion: " << i << ", direccion en memoria: " << &arreglo[i] << endl;
	//note los saltos de 4 en 4 para cada elemento porque arreglo es una coleccion
	//de elementos int, cada int mide 4 bytes.
	
	double arreglo2[] = { 3.1416, 1.2345767, 8.567546, 7777, 123.4567 };
	//imprimir las posiciones de memoria de cada elemento de arreglo2
	cout << "Direcciones de memoria para arreglo2: " << endl;
	for( int i = 0; i < 5; i++ )
		cout << "posicion: " << i << ", direccion en memoria: " << &arreglo2[i] << endl;
	//note los saltos de 8 en 8 para cada elemento porque arreglo2 es una coleccion
	//de elementos double, cada double mide    8 bytes.
	
	//crear un arreglo sin inicializar y luego llenarle sus elementos
	int arreglo5[4];
	
	cout << "*************arreglo5 sin inicializar*************" << endl;
	for(int i = 0; i < 4; i++)
		cout << arreglo5[i] << endl;
	//note que algunas posiciones tienen datos basura, no todos inician en cero.
	
	//colocar valores a arreglo5
	arreglo5[0] = 7;
	arreglo5[1] = 4;
	arreglo5[2] = 111;
	arreglo5[3] = 67;
	
	cout << "*************arreglo5 inicializado*************" << endl;
	for(int i = 0; i < 4; i++)
		cout << arreglo5[i] << endl;
	
	//conocer donde comienza y donde termina una variable:
	//no olvide colocar el parametro -std=c++11 en la opciones del compilador
	cout << "inicio de arreglo5: " << begin(arreglo5) << endl;
	cout << "final de arreglo5: " << end(arreglo5) << endl;
	
	//conocer el tamaño de un arreglo:
	cout << "cantidad de items en arreglo5: " << end(arreglo5)-begin(arreglo5) << endl;
	
	double arregloNumeros[] = {3.4, 5.1, 7.8, 1.111, 5.564, 123.45, 5.895, 777, 123.56};
	//imprimir el arreglo:
	cout << "*************************" << endl;
	for( int i = 0; i < end(arregloNumeros)-begin(arregloNumeros); i++ )
		cout << arregloNumeros[i] << endl;
	
	return 123;
}




















