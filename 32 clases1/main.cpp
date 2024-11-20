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
#include "Mascota.h"
#include "Carro.h"
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
	
	//construiremos a p2 usando el constr. con 2 param.
	Persona *p2 = new Persona("Irene",41);
	cout << "Valores default de p2: *************" << endl;
	cout << "nombre: " << p2->nombre << endl;
	cout << "edad: " << p2->edad << endl;
	cout << "genero: " << p2->genero << endl;
	cout << "DNI: " << p2->dni << endl;
	
	//construir otra persona
	Persona *p3 = new Persona("Viena",16,'F',1234123412345);
	cout << "Valores default de p3: *************" << endl;
	cout << "nombre: " << p3->nombre << endl;
	cout << "edad: " << p3->edad << endl;
	cout << "genero: " << p3->genero << endl;
	cout << "DNI: " << p3->dni << endl;
	
	//prueba de metodos
	p1->saludar();
	p2->saludar();
	p3->saludar();
	
	p1->imprimir();
	p2->imprimir();
	p3->imprimir();
	
	//metodos que hacen return:
	cout << "edad de p1: " << p1->getEdad() << endl;;
	
	cout << "genero descrito de p1: " << p1->getGeneroDescripcion() << endl;
	cout << "genero descrito de p2: " << p2->getGeneroDescripcion() << endl;
	cout << "genero descrito de p3: " << p3->getGeneroDescripcion() << endl;
	
	//crear objetos de clase Mascota
	Mascota *m1 = new Mascota();
	m1->imprimir();
	Mascota *m2 = new Mascota("Mandarino","Gato",3);
	m2->imprimir();
	Mascota *m3 = new Mascota("Rambo","Perro",2,'M',true);
	m3->imprimir();
	
	//crear objetos de clade Carro
	Carro *c1 = new Carro("Toyota","Corolla","Negro",2012);
	//anio no es accesible desde fuera de forma convencional, porque es private:
	//c1->anio = -999;
	//cout << c1->anio << endl;
	
	c1->setAnio(1995);
	//manana vemos el get y la vulnerabilidad en el constructor
	
	c1->imprimir();
	
	return 777;
}














