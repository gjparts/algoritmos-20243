#include<iostream>
#include<ctime>
using namespace std;

int main(){
	/*Hacer un arreglo bidimensional de 5x8 de numeros enteros
	llenar cada elemento del arreglo con numero al azar entre
	-6 y 25. No importa que se repitan numeros.
	Imprimir dicho arreglo en formato tabular.*/
	
	int arreglo[5][8];
	srand(time(NULL));
	
	//llenar el arreglo
	for( int i = 0; i < end(arreglo)-begin(arreglo); i++ ){
		for( int j = 0; j < end(arreglo[i])-begin(arreglo[i]); j++ ){
			arreglo[i][j] = rand()%(25-(-6)+1)+(-6);
			cout << arreglo[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 111;
}
