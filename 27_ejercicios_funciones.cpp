#include<iostream>
#include "27_funciones.h";
using namespace std;

int main(){
	cout << elevar(2,3) << endl;
	cout << elevar(2,0) << endl;
	//cout << elevar(2,-5) << endl;
	cout << elevar(4,1345) << endl;
 	cout << hipotenusa(4,5) << endl;
 	cout << esMultiplo(4,2) << endl;
 	cout << esMultiplo(5,3) << endl;
 	
 	//las funciones void al no retornar nada; entonces
 	//no se pueden imprimir ni tampoco asignar a variables.
 	//lo siguiente no funciona:
 	//cout << rectangulo(4,5,'x') << endl;
 	//lo correcto es:
 	rectangulo(4,5,'x');
 	cout << areaCirculo(14.0f) << endl; //para usar la version con float
 	cout << areaCirculo(14.0) << endl;  //para usar la version con double
 	
 	int a = 6,b = 7,c = 1;
 	cout << minimo(a,b,c) << endl; //prueba con int
 	
 	float q = 3.5, w = 6.7, e = 8.2;
 	cout << minimo(q,w,e) << endl; //prueba con float
 	
 	cout << minimo(5.8, 4.5655, 9.999) << endl; //prueba con double
 	cout << minimo(5.8f, 4.5655f, 9.999f) << endl; //prueba con float
 	cout << minimo(5, 4, 9) << endl; //prueba con int
 	
 	cout << todoMayusculas("gato blanco") << endl;
 	cout << todoMayusculas("GATO BLANCO") << endl;
 	cout << todoMayusculas("gATo BLanCO") << endl;
 	
 	cout << encontrar('h',"UNAH") << endl;
 	cout << encontrar('H',"UNAH") << endl;
 	cout << encontrar('a',"mandarina") << endl;
 	
 	cout << "******************" << endl;
 	string frutas[] = {"pera","uva","manzana","sandia","mandarina"};
 	cout << buscarDentroDeArreglo("uva",frutas,end(frutas)-begin(frutas)) << endl;
 	cout << buscarDentroDeArreglo("kiwi",frutas,end(frutas)-begin(frutas)) << endl;
 	cout << buscarDentroDeArreglo("MANDARINa",frutas,end(frutas)-begin(frutas)) << endl;
 	cout << buscarDentroDeArreglo("mandarina",frutas,end(frutas)-begin(frutas)) << endl;
 	
	return 789;
}








