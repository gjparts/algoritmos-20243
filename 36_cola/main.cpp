#include<iostream>
#include<stdexcept>
#include "Nodo.h"
#include "Cola.h"

using namespace std;

int main(){
	Cola *c1 = new Cola();
	c1->enqueue("Pedro");
	c1->enqueue("Pablo");
	c1->enqueue("Paco");
	c1->print();
	
	c1->dequeue();
	c1->dequeue();
	c1->print();
	
	c1->dequeue();
	c1->print();
	
	try{
		c1->dequeue();
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	c1->print();
	
	
	return 8765;
}
