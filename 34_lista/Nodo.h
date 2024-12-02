#ifndef NODO_H
#define NODO_H

#include<iostream>
using namespace std;

class Nodo{
	private:
	public:
		//atributos
		string value;
		Nodo *next;
		//constructor
		Nodo(string value){
			this->value = value;
			//el Nodo siguiente de un nuevo Nodo
			//siempre apunta a NULL
			this->next = NULL;
		}
};

#endif
