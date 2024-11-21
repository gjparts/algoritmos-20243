//clase Carro
#ifndef CARRO_H
#define CARRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Carro{
	private:
		//atributos privados (no se pueden modificar desde afuera de la clase)
		//o sea no se pueden modificar ni ver desde main
		int anio;
	public:
		//atributos publicos
		string marca;
		string modelo;
		string color;
		
		//constructor
		Carro(string marca, string modelo, string color, int anio){
			this->marca = marca;
			this->modelo = modelo;
			this->color = color;
			//desde el constructor, si un atributo tiene metodo set
			//que aplica reglas entonces debe usarse aqui tambien:
			this->setAnio(anio);
		}
		//metodos
		void imprimir(){
			cout << "***** Ficha de Carro *****" << endl;
			cout << "Marca: " << this->marca << endl;
			cout << "Modelo: " << this->modelo << endl;
			cout << "Color: " << this->color << endl;
			cout << "Año: " << this->anio << endl;
		}
		/*para poder escribir el atributo anio desde fuera de la
		clase y hacer que se cumplan sus reglas; entonces hacemos
		un metodo set.
		-> los metodos set, usualemente no retornan nada (void)
		-> los metodos set reciben un parametro del tipo de dato del atributo a afectar
		-> los metodos set escriben un valor a un atributo; pero validando sus reglas*/
		void setAnio(int anio){
			//se recomienda usar guard clauses para validar que se cumplan las reglas del atributo
			//regla: anio debe ser un numero mayor a 2000
			if( anio > 2000 )
				this->anio = anio; //se acepta el nuevo valor
			else
				throw invalid_argument("anio debe ser un numero mayor a 2000");
		}
		/*para poder leer el valor de un atributo privado desde afuera de la clase
		usaremos un metodo get, este tipo de metodos deben tener el mismo
		tipo de dato que el atributo en cuestion.*/
		int getAnio(){
			return this->anio;
		}
};

#endif





