#include<iostream>
using namespace std;

int main(){
	//buscar un string dentro de otro string
	string str = "El veloz murcielago hindu comia feliz, comia kiwi y comia melon.";
	cout << str << endl;
	
	string buscar;
	cout << "Digite el texto que desea buscar: ";
	getline(cin,buscar);
	
	int posicion = str.find(buscar,0);
	/*find() devuelve la posicion donde se encontro determinado string
	dentro de otro string, sus parametros son:
	* primer parametro: lo que quiero buscar
	* segundo parametro: a partir de que posicion voy a comenzar a buscar
	
	-> si find() retorna -1 quiere decir que no encontro el string buscado
	-> find() NO ignora mayusc./minusc.
	*/
	if( posicion == -1 )
		cout << "No se encontro";
	else
		cout << "Texto encontrado en la posicion " << posicion;
	
	cout << endl;
	
	return 567;
}
