#include<iostream>
using namespace std;

int main(){
	/*CONVERSIONES
	stoi	string to int
	stof	string to float
	stod	string to double
	to_string	number to string*/
	//string a entero
	string str = "67.56";
	//note que la parte decimal se trunca en la conversion (no hay redondeo)
	int entero = stoi(str);
	cout << "str: " << str << endl;
	cout << "entero: " << entero << endl;
	//si el string comienza con caracteres no numericos, la conversion falla
	/*str = "abc123";
	entero = stoi(str);
	cout << "str: " << str << endl;
	cout << "entero: " << entero << endl;*/
	//si el string comienza con numeros y luego lleva letras
	//la conversion trunca a partir de la primer letra encontrada
	str = "123abc456";
	entero = stoi(str);
	cout << "str: " << str << endl;
	cout << "entero: " << entero << endl;
	
	//convertir de string a float
	str = "3.141698765432";
	float f1 = stof(str);
	cout << "str: " << str << endl;
	cout << "f1: " << f1 << endl;
	
	//convertir de string a double
	str = "5.565656565656";
	double d1 = stod(str);
	cout << "str: " << str << endl;
	cout << "d1: " << d1 << endl;
	
	//convertir de cualquier numero a string
	int entero1 = 78;
	string str1 = to_string(entero1);
	cout << "entero1: " << entero1 << endl;
	cout << "str1: " << str1 << endl;
	
	float flotante1 = 7.56445675675667575757656;
	string str2 = to_string(flotante1);
	cout << "flotante1: " << flotante1 << endl;
	cout << "str2: " << str2 << endl;
	
	double doble1 = 8.432342342432445355;
	string str3 = to_string(doble1);
	cout << "doble1: " << doble1 << endl;
	cout << "str3: " << str3 << endl;
	
	return 747;
}







