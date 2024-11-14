/*Pasos para manejar un proyecto de clases en C++:
1) crear un folder para manejar nuestro proyecto con clases
2) crear un archivo donde estara nuestra funcion main,
   guardar dicho archivo como main.cpp dentro del folder creado
   en el paso 1
3) para cada una de las clases de su proyecto crear el respectivo
   archivo nombrado con extension .h siempre dentro del mismo folder
   creado en el paso 1 y hacer el include de dicho archivo .h en main.cpp*/
#include<iostream>
#include "Persona.h"
using namespace std;

int main(){
	//instanciar un objeto de clase Persona
	//observe que se coloca simbolo de apuntador de memoria
	//en el nombre de la variable:
	Persona *p1 = new Persona();
	//los objetos son instancias de una clase, o sea apuntan a la memoria
	//que direccion de memoria tiene p1?
	cout << "direccion de p1: " << p1 << endl; //ya no se necesita el signo * para interactuar con el objeto
	//imprimir lo que hay en los atributos de p1:
	cout << "Valores default de p1: *************" << endl;
	cout << "nombre: " << p1->nombre << endl;
	cout << "edad: " << p1->edad << endl;
	cout << "genero: " << p1->genero << endl;
	cout << "DNI: " << p1->dni << endl;
	
	//podemos cambiar los valores de los atributos de p1:
	p1->nombre = "Gerardo Portillo";
	p1->edad = 42;
	p1->genero = 'M';
	p1->dni = 501200408707; //ojo: no poner el cero a la izquierda para: 0501200408707
	
	cout << "Valores nuevos de p1: *************" << endl;
	cout << "nombre: " << p1->nombre << endl;
	cout << "edad: " << p1->edad << endl;
	cout << "genero: " << p1->genero << endl;
	cout << "DNI: " << p1->dni << endl;
	
	return 777;
}







