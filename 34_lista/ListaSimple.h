#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include<iostream>
#include<stdexcept>
#include "Nodo.h"
using namespace std;

class ListaSimple{
	private:
		int length;
		Nodo *first;
		Nodo *last;
	public:
		//constructor
		ListaSimple(){
			this->length = 0;
			this->first = NULL;
			this->last = NULL;
		}
		//metodos
		int getLength(){
			return this->length;
		}
		Nodo *getFirst(){
			return this->first;
		}
		Nodo *getLast(){
			return this->last;
		}
		//metodo para agregar un Nodo al final de la lista
		void push(string value){
			//1) crear Nodo tmp
			Nodo *tmp = new Nodo(value);
			//2) evaluar:
			if( this->length == 0 ){
				//a) si length es CERO
				//last y first apuntan a tmp
				this->first = tmp;
				this->last = tmp;
			}
			else{
				//b) si length > 0
				//el next de last apunta a tmp
				this->last->next = tmp;
				//last apuntara a tmp
				this->last = tmp;
			}
			//3) length suma 1
			this->length++;
		}
		//metodo para imprimir los valores de los Nodos en la lista
		void print(){
			//algoritmo de recorrido
			//primero creamos un Nodo temporal que apunte al primer Nodo de la lista
			Nodo *tmp = this->first;
			while( tmp != NULL ){
				//mientras el Nodo temporal sea distinto de NULL vamos a imprimir el valor de dicho Nodo
				cout << tmp->value << "->";
				//ahora Nodo temporal va a apuntar a su siguiente Nodo (pasar al siguiente Nodo)
				tmp = tmp->next;
			}
			//se termino el recorrido
			cout << "NULL" << endl;
		}
		//metodo para obtener un Nodo en base a su posicion
		//las posiciones en una lista simple las vamos a numerar desde 0 hasta N-1
		Nodo *get(int pos){
			//lo primero: validamos que la posicion solicitada exista
			if( pos < 0 || pos > this->length-1 )
				throw invalid_argument("posicion no permitida.");
			else{
				//recorrer la lista hasta llegar a la posicion deseada
				//comenzamos en el primer Nodo
				Nodo *tmp = this->first;
				//vamos a contar los saltos para saber por que posicion vamos
				int posicionActual = 0;
				while(tmp != NULL){
					//si posicionActual es igual a la posicion solicitada
					//entonces retornamos el Nodo donde nos encontramos
					if( posicionActual == pos )
						return tmp;
					
					//pasar al siguiente Nodo
					tmp = tmp->next;
					//sumar 1 a la posicion actual
					posicionActual++;
				}
			}
		}
		//metodo para reemplazar el valor de un Nodo en determinada posicion
		void set(int pos, string value){
			//reutilizamos el metodo get
			//obtenemos el Nodo en la posicion solicitada y le cambiamos su value
			//por el value enviado en el metodo set
			this->get(pos)->value = value;
		}
		//metodo para eliminar de la lista un Nodo
		//en determinada posicion
		//El Nodo eliminado debe retornarse por si el programador
		//lo necesita.
		Nodo *pop(int pos){
			//si la lista no tiene items entonces devolver NULL
			if( this->length == 0 ) return NULL;
			//verificar si el nodo a eliminar es first o no
			if( pos == 0 ){
				//a) el Nodo a eliminar es first
				Nodo *tmp = this->first; //1) tmp apunta a first
				//2) el next de first ahora es el nuevo first
				this->first = this->first->next;
				//3) el next de tmp apuntara a null (para desconectarlo de la lista)
				tmp->next = NULL;
				//4) restar 1 a length
				this->length--;
				//5) retornar tmp
				return tmp;
			}
			else{
				//b) el Nodo a eliminar NO es el first
				//1) apuntar tmp al Nodo a borrar
				Nodo *tmp = this->get(pos);
				//2) apuntar antes al Nodo previo al Nodo a borrar
				Nodo *antes = this->get(pos-1);
				//3) el next de antes apuntara al next de tmp
				antes->next = tmp->next;
				//4) si tmp es igual a last entonces last apuntara a antes
				if( tmp == this->last ){
					this->last = antes;
					//next de last siempre apunta a null
					this->last->next = NULL;
				}
				//5) el next de tmp apuntara a null (para desconectarlo de la lista)
				tmp->next = NULL;
				//6) restar 1 a length
				this->length--;
				//7) retornar tmp
				return tmp;
			}
			//el codigo anterior lo pueden optiminzar; pero eso
			//se los dejo de tarea al que quiera hacerlo.
		}
		//metodo find: va a devolver la posicion de la primera coincidencia
		//encontrada para un value dentro de los Nodos de la lista
		//si no encuentra nada; entonces va a devolver -1
		int find(string value){
			//algoritmo de recorrido (mas eficiente)
			Nodo *tmp = this->first; //iniciar el primer nodo
			//contador de saltos
			int pos = 0;
			while( tmp != NULL ){
				if( tmp->value == value )
					return pos; //si el valor del Nodo actual es igual a valor busvado
								//retornamos el salto donde nos encontramos
				
				tmp = tmp->next; //pasar al siguiente nodo
				pos++;	//sumar 1 salto
			}		
			//si llego aqui es porque no encontro nada
			return -1;
		}
};

#endif





