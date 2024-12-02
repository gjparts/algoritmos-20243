#include<iostream>
#include<stdexcept>
#include "Nodo.h"
#include "ListaSimple.h"
using namespace std;

int main(){
	ListaSimple *l1 = new ListaSimple();
	l1->push("7");
	l1->push("1");
	l1->push("3");
	l1->push("5");
	l1->push("4");
	l1->print();
	
	try{
		//pruebas del metodo get
		cout << "Valor del Nodo en la posicion 2: " << l1->get(2)->value << endl;
		cout << "Valor del Nodo en la posicion 0: " << l1->get(0)->value << endl;
		//si pide una posicion no valida, genera una excepcion:
		//cout << "Valor del Nodo en la posicion 5: " << l1->get(5)->value << endl;
		//cout << "Valor del Nodo en la posicion -8: " << l1->get(-8)->value << endl;
		
		//pruebas del metodo set
		l1->set(1,"777");
		l1->set(4,"12345");
		//l1->set(-9, 56);
		l1->print(); //imprimir la lista
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	//prueba de pop
	//eliminacion del primer Nodo
	l1->pop(0);
	l1->print();
	//eliminacion de un Nodo que no sea el primero
	l1->pop(2);
	l1->print();
	//eliminacion de un Nodo que apunte al ultimo
	l1->pop( l1->getLength()-1 );
	l1->print();
	
	//quien es last en l1?
	cout << "last de l1 es: " << l1->getLast()->value << endl;
	
	//eliminacion del primer Nodo
	l1->pop(0);
	l1->print();
	//eliminacion del primer Nodo
	l1->pop(0);
	l1->print();
	//eliminacion del primer Nodo (ojo aqui ya no quedan Nodos)
	l1->pop(0);
	l1->print();
	
	//encontrar un valor en la lista
	l1->push("4");
	l1->push("5");
	l1->push("7");
	l1->push("1");
	l1->push("1");
	l1->push("1");
	l1->push("5");
	l1->push("5");
	l1->push("2");
	l1->push("5");
	l1->push("9");
	l1->push("3");
	l1->push("8");
	l1->push("1");
	l1->print();
	cout << "7 esta en la posicion: " << l1->find("7") << endl;
	cout << "1 esta en la posicion: " << l1->find("1") << endl;
	cout << "8 esta en la posicion: " << l1->find("8") << endl;
	cout << "4 esta en la posicion: " << l1->find("4") << endl;
	
	return 456;
}







