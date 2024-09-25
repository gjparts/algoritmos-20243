#include<iostream>
using namespace std;

int main(){
	/*capturar un string y luego imprimirlo pero dejando tres asteriscos
	entre cada caracter sin afectar a la cadena capturada, ejemplo
	digite un string: Pera
	resultado: P***e***r***a***
	*/
	string str;
	cout << "digite un string: ";
	getline(cin,str);
	for( int i = 0; i < str.length(); i++ )
		cout << str[i] << "***";
	cout << endl;
	
	return 6543;
}
