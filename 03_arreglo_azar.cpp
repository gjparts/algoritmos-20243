#include<iostream>
#include<ctime>
using namespace std;

int main(){
	/*Hacer un programa que tenga un arreglo de
	enteros con 30 posiciones,
	lo van a llenar con numeros al azar entre
	7 y 85 (se pueden repetir numeros).
	Por ultimo imprimir el contenido del arreglo.*/
	srand( time(NULL) );
	int arreglo[30];
	for( int i = 0; i < end(arreglo)-begin(arreglo); i++ ){
		arreglo[i] = rand()%(85-7+1)+7;
		cout << arreglo[i] << endl;
	}
	
	return 765;
}
