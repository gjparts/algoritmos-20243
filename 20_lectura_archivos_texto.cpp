#include<iostream>
#include<fstream>
using namespace std;

int main(){
	/*hacer un programa que abra el archivo ejemplo_24mil.txt, lo recorra
	y muestre cuantas lineas tiene, cual es la suma de todos sus numeros,
	cuantos numeros son pares, cuantos numeros son impares, y
	el promedio de todos sus numeros.
	Importante: No imprimir cada linea*/
	fstream archivo;
	
	archivo.open("ejemplo_24mil.txt", ios::in);
	
	if( archivo.is_open() ){
		int lineas = 0, suma = 0, pares = 0, impares = 0; //variables acumuladoras
		int numero; //variable temporal
		string linea;  //variable temporal
		while( !archivo.eof() ){
			getline(archivo,linea); //leer linea por linea
			
			try{
				numero = stoi(linea); //convertir linea leida a numero entero
				suma += numero; //sumamos solo si la conversion es exitosa
				if( numero%2 == 0 ) pares++; else impares++;
			}catch(exception ex){}
			
			lineas++;
		}
		archivo.close();
		cout << "Numero de lineas en archivo: " << lineas << endl;
		cout << "Suma de los numeros en el archivo: " << suma << endl;
		cout << "Cantidad de numeros pares en el archivo: " << pares << endl;
		cout << "Cantidad de numeros impares en el archivo: " << impares << endl;
		cout << "Promedio: " << suma/(pares+impares) << endl;
	}
	else
		cout << "No se pudo abrir el archivo o no tiene permiso" << endl;
	
	return 345;
}
