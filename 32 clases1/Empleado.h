//clase Empleado
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Empleado{
	private:
		int edad;
		float salario;
		char genero;
		char tipoContrato;
	public:
		string nombre;
		//constructor
		Empleado(string nombre, int edad, float salario, char genero, char tipoContrato){
			this->nombre = nombre;
			//aplicar los set a los atributos con reglas:
			this->setEdad(edad);
			this->setSalario(salario);
			this->setGenero(genero);
			this->setTipoContrato(tipoContrato);
		}
		//metodos
		void setEdad(int edad){
			if( edad < 18 )
				throw invalid_argument("edad no puede ser < 18");
			else
				this->edad = edad; //se acepta
		}
		int getEdad(){
			return this->edad;
		}
		void setSalario(float salario){
			if( salario < 0 )
				throw invalid_argument("salario no puede ser < 0");
			else
				this->salario = salario; //se acepta
		}
		float getSalario(){
			return this->salario;
		}
		void setGenero(char genero){
			if( genero == 'M' || genero == 'F' || genero == 'X' )
				this->genero = genero; //se acepta
			else
				throw invalid_argument("genero solo permite: M F X");
		}
		char getGenero(){
			return this->genero;
		}
		void setTipoContrato(char tipoContrato){
			if( tipoContrato == 'T' || tipoContrato == 'P' )
				this->tipoContrato = tipoContrato; //se acepta
			else
				throw invalid_argument("tipoContrato solo permite: T P");
		}
		char getTipoContrato(){
			return this->tipoContrato;
		}
};






#endif
