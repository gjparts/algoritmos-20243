//clase Mascota
#ifndef MASCOTA_H
#define MASCOTA_H

#include<iostream>
using namespace std;

class Mascota{
	private:
	public:
		//atributos publicos
		string nombre;
		string especie;
		int edad;
		char genero;
		bool pedigree;
		//constructores
		Mascota(){
			//sin parametros
			this->nombre = "no tiene";
			this->especie = "no determinada";
			this->edad = 0;
			this->genero = 'X';
			this->pedigree = false;
		}
		Mascota(string nombre, string especie, int edad, char genero, bool pedigree){
			//para todos los atributos
			this->nombre = nombre;
			this->especie = especie;
			this->edad = edad;
			this->genero = genero;
			this->pedigree = pedigree;
		}
		Mascota(string nombre, string especie, int edad){
			//con 3 parametros: nombre, especie, edad
			this->nombre = nombre;
			this->especie = especie;
			this->edad = edad;
			this->genero = 'X';
			this->pedigree = false;
		}
		//metodos
		void imprimir(){
			cout << "********* Ficha de Mascota *********" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Especie: " << this->especie << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->getGeneroDescripcion() << endl;
			cout << "Tiene Pedigree: " << ( this->pedigree == true ? "Si" : "No" ) << endl;
		}
		string getGeneroDescripcion(){
			if( this->genero == 'M' ) return "Macho";
			if( this->genero == 'H' ) return "Hembra";
			return "No sabe";
		}
};

#endif






