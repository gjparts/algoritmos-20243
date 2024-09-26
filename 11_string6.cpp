#include<iostream>
using namespace std;

int main(){
	//comparar dos string (no se ignoran mayusc./minusc.
	string a, b;
	cout << "Digitar string a: ";
	getline(cin,a);
	cout << "Digitar string b: ";
	getline(cin,b);
	
	if( a == b )
		cout << "ambos string son iguales.";
	else
		cout << "ambos string NO son iguales";
	
	cout << endl;
	
	return 777;
}
