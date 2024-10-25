/*FUNCIONES SIN USAR PROTOTIPADO USANDO ARCHIVO EXTERNO
Consiste en definir nuestras funciones dentro de un archivo
aparte, normalmente se les nombra con extension .h (header)
Su ventaja radica en que es mas organizado, y que se pueden
reutilizar estos archivos h en mas programas, a esto le llamamos
programacion Modular.*/
#include<iostream>
#include "funciones.h" //cuando el include se usa con archivos
					   //que estan el propio folder se usa comillas dobles
using namespace std;

int main(){
	cout << sumar(1,3) << endl;
	cout << cuadratica(1,4,1,2) << endl;
	cout << productoDeTres(3,4,3) << endl;
	
	return 111;
}
