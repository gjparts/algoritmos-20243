#include<iostream>
using namespace std;

int main(){
	//leer datos desde la consola hacia un string
	string nombre;
	
	//cout << "digite su nombre completo: ";
	//cin >> nombre;
	//cout << "el nombre digitado fue: "+nombre << endl;
	//no podemos usar cin para leer string que llevan espacios
	//en blanco porque cada espacio en blanco le indica a cin
	//que se va a guardar esa porcion en una variable.
	//por ello si usted escribe su nombre y apellido, solo se
	//guarda el nombre.
	
	//solucion: usar la funcion getline
	cout << "digite su nombre completo: ";
	getline(cin,nombre);
	/*donde:
	el primer parametro es el origen, en este caso cin
	el segundo parametro es el destino, en esta caso la variable nombre*/
	cout << "el nombre digitado fue: "+nombre << endl;
	
	return 876;
}
