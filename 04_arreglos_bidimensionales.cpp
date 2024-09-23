#include<iostream>
using namespace std;

int main(){
	/*Arreglo bi-dimensional: es un arreglo principal que
	apunta a otros arreglos secundarios.*/
	//forma 1: declararlo sin inicializarlo
	int arreglo1[5][3];
	//despues le puede colocar algunos valores:
	arreglo1[0][1] = 777;
	arreglo1[1][2] = 111;
	arreglo1[0][0] = 444;
	arreglo1[2][2] = 123;
	//recorrer el arreglo bidimensional e imprimirlo en forma tabular (tabla)
	//primero se recorre el arreglo principal (filas)
	for( int i = 0; i < end(arreglo1)-begin(arreglo1); i++ )
	{
		//ahora se recorre cada arreglo secundario (columnas)
		for( int j = 0; j < end(arreglo1[i])-begin(arreglo1[i]); j++ ){
			//imprimir el j-esimo valor dentro del i-esimo arreglo
			cout << arreglo1[i][j] << "\t";
		}
		cout << endl; //pasar al siguiente renglon
	}
	//note que muchas de las posiciones del arreglo estan llenas con numeros basura
	
	//forma 2: declarar el arreglo prellenado con valores iniciales
	//iportante: en esta forma es obligatorio colocarle el tamaño de los arreglos secundarios
	//en este caso son 5 elementos en cada uno
	int arreglo2[][5] = {
		{5, 8, 9, 15, 22},
		{1, 11, 23, 45, 77},
		{522, 81, 239, 125, 123},
		{15, 444, 0, -15, 22},
		{67, 543, -8, 6, 22}
	};
	//recorrer e imprimir de forma tabular
	cout << "********************************" << endl;
	for( int i = 0; i < end(arreglo2)-begin(arreglo2); i++ )
	{
		//ahora se recorre cada arreglo secundario (columnas)
		for( int j = 0; j < end(arreglo2[i])-begin(arreglo2[i]); j++ ){
			//imprimir el j-esimo valor dentro del i-esimo arreglo
			cout << arreglo2[i][j] << "\t";
		}
		cout << endl; //pasar al siguiente renglon
	}
	
	return 777;
}












