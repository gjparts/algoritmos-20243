#include<iostream>
using namespace std;

int main(){
	//arreglo de string
	string colores[] = {"verde","gris","azul","rojo","rosa","amarillo"};
	//consultar alguno de sus items
	cout << colores[3] << endl;
	//obtener el caracter 2 del elemento numero 1
	cout << colores[1][2] << endl;
	//obtener el caracter 6 del elemento numero 5
	cout << colores[5][6] << endl;
	//obtener el tamaño del arreglo principal
	cout << "numero de items en colores: " << end(colores)-begin(colores) << endl;
	//reemplazar un elemento dentro del arreglo (reemplazar azul por violeta)
	colores[2] = "violeta";
	//concatenar algo a un elemento del arreglo
	colores[0] += " olivo";
	
	//reemplazar un caracter de algun string dentro del arreglo
	colores[5][3] = 'R';
	colores[2][4] = '3';
	
	//concatenar caracteres al final de un string
	colores[5] += '.';
	colores[3] = colores[3] + 'x';
	
	//imprimir el contenido del arreglo de colores
	cout << "*************************" << endl;
	for( int i = 0; i < end(colores)-begin(colores); i++ )
		cout << colores[i] << endl;
	
	//cuanto miden algunos elementos del arreglo
	cout << "elemento 2 mide: " << colores[2].length() << endl;
	cout << "elemento 4 mide: " << colores[4].length() << endl;
	
	/*Ejercicio: hacer un arreglo de string que tenga las siguientes frutas:
	pera, manzana, naranja, uva, fresa, sandia, mandarina
	luego hacer una rutina que altere cada fruta agregando un
	ASTERISCO entre cada caracter de cada una de las frutas,
	por ultimo imprimir dicho arreglo*/
	string frutas[] = {"pera","manzana", "naranja", "uva",
						"fresa", "sandia", "mandarina"};
	//recorrer el arreglo principal, fruta por fruta
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		//extraer la fruta hacia una variable
		string copia = frutas[i];
		//vaciar la fruta actual en el arreglo
		frutas[i] = "";
		//recorrer la fruta en la copia e ir pasando cada caracter
		//hacia la fruta actual en el arreglo mas un asterisco
		for( int j = 0; j < copia.length(); j++ )
			frutas[i] = frutas[i]+copia[j]+'*';
		
		//imprimir la fruta alterada
		cout << frutas[i] << endl;
	}
	
	
	return 654;
}








