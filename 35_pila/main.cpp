#include<iostream>
#include "Nodo.h"
#include "Pila.h"
using namespace std;

int main(){
	Pila *s1 = new Pila();
	
	//apilar
	s1->push("Caja de Acero");
	s1->push("Caja de Madera");
	s1->push("Caja de Carton");
	s1->push("Caja de Papel");
	s1->push("Boligrafo");
	s1->print();
	
	//desapilar
	s1->pop();
	s1->pop();
	s1->pop();
	s1->print();
	
	//desapilar y hacer algo con el Nodo desapilado
	try{
		Nodo *n = s1->pop();
		cout << "Nodo desapilado es " << n->value << endl;
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	s1->print();
	
	return 678;
}





