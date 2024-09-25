#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//transformar un string a mayusculas
	//forma 1: alterando al string original
	string string1;
	cout << "digitar un string: ";
	getline(cin,string1);
	//aplicar transformacion:
	transform( string1.begin(), string1.end(), string1.begin(), ::toupper );
	cout << string1 << endl;
	
	//forma 2: sin alterar al string original
	string string2;
	cout << "digitar string2: ";
	getline(cin,string2);
	//aplicar transformacion:
	//hacer una copia:
	string copia = string2;
	transform( copia.begin(), copia.end(), copia.begin(), ::toupper );
	cout << "el valor de string2 es: " << string2 << endl;
	cout << "el valor de string2 en mayusculas es: " << copia << endl;
	
	//si quiere convertir a minusculas un string utilice ::tolower
	
	return 432;
}





