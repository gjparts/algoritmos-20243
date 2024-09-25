#include<iostream>
using namespace std;

int main(){
	/*Hacer un programa que lea un string s1, luego el programa va a tener
	otro string llamado s2, copiar el contenido de s1 dentro de s2; pero
	dejando tres asteriscos entre cada caracter, luego imprimir s1 y s2. ejemplo:
	digitar string: Pera
	s1: Pera
	s2: P***e***r***a***
	*/
	string s1, s2 = ""; //no olvide inicializar a s2 con string vacio
	cout << "digitar string: ";
	getline(cin,s1);
	//copiar el contenido de s1 en s2; pero dejando
	//tres asteriscos entre cada char
	for( int i = 0; i < s1.length(); i++ )
		s2 = s2+s1[i]+"***";
	
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	
	return 6543;
}


