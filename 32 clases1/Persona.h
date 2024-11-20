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
		//constructores:
		/*casi siempre son public, se llaman igual que la clase, no
		tiene tipo de dato porque retorna una direccion de memoria, en
		el caso de C++ puede haber varios por clase.
		Normalmente se usan para inicializar los atributos de la clase
		o para ejecutar algun algoritmo de inicio.*/
		Persona(){
			//este es un constructor sin parametros, no recibe nada
			//en el parentesis
			//en este caso lo usaremos para inicializar los atributos
			//de la clase con valores predeterminados (default)
			this->nombre = "No tiene";
			this->edad = 0;
			this->genero = 'X';
			this->dni = 0;
		}
		//podemos tener mas de un constructor
		Persona(string nombre, int edad){
			//este es un constructor con parametros, en este caso dos param.
			this->nombre = nombre;
			this->edad = edad;
			this->genero = 'X';
			this->dni = 0;
		}
		//otro constructor, esta vez con todos los parametros
		Persona(string nombre, int edad, char genero, long long dni){
			this->nombre = nombre;
			this->edad = edad;
			this->genero = genero;
			this->dni = dni;
		}
		//metodos
		void saludar(){
			cout << "Hola me llamo " << this->nombre << " mi edad es " << this->edad << endl;
		}
		int getEdad(){
			return this->edad;
		}
		void imprimir(){
			cout << "********* Perfil de Persona *********" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			//se puede mandar a llamar metodos de la clase actual:
			cout << "Genero: " << this->getGeneroDescripcion() << endl;
			cout << "DNI: " << this->dni << endl;
			cout << "*************************************" << endl;
		}
		/*hacer un metodo que devuelva un string de acuerdo al valor almacenado
		en el atributo genero, el string a retornar sera el siguiente:
		si genero es M entonces retornar Masculino
		si genero es F entonces retornar Femenino
		si genero es X entonces retornar Otros
		si genero no es ninguno de los anteriores entonces retornar: Desconocido*/
		string getGeneroDescripcion(){
			if( this->genero == 'M' ) return "Masculino";
			if( this->genero == 'F' ) return "Femenino";
			if( this->genero == 'X' ) return "Otros";
			//si llego hasta aqui es porque no era M F X
			return "Desconocido";
		}
		
}; //este punto y coma es importante!

#endif







