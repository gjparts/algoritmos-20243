#include <iostream>
#include <ctime>
using namespace std;

int main(){
	//antes de comenzar hay que ejecutar el generador
	//de numeros aleatorios basado en la hora de la computadora:
	srand(time(NULL));
	//generar un numero entero al azar entre 7 y 91
	int n;
	n = rand()%(91-7+1)+7;
	cout << n << endl;
	
	//generar 10 numeros al azar entre 11 y 123
	cout << "***************************" << endl;
	for( int i = 1; i <= 10; i++ ){
		n = rand()%(123-11+1)+11;
		cout << n << endl;
	}
	
	return 777;
}
