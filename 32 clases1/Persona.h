//clase Persona
#ifndef PERSONA_H
#define PERSONA_H
//define y endif permiten establecer una region de codigo
//con nombre o identificador
//ifndef impide que se define dos veces la clase Persona por ejemplo en un doble include
#include<iostream>
using namespace std;

class Persona{
	private:
		//ambito (scope) privado: aqui va todo lo
		//que no queremos que sea accesible desde fuera
		//de esta clase.
	public:
		//ambito publico: aqui va todo lo que deseamos que sea
		//accesible desde fuera de esta clase.
		//atributos:
		string nombre;
		int edad;
		char genero;
		long long dni;
}; //este punto y coma es importante!

#endif
