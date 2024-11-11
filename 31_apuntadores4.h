#include<iostream>
#include<algorithm>
using namespace std;

/*Apuntadores para tipos struct y object
1) en el parametro de la funcion se pone el simbolo asterisco
   antes de la variable (asi como haciamos con los tipos primitivos)
2) cuando se altera o lee a la variable apuntada se le coloca el signo asterisco
   antes de la variable (asi como haciamos con los tipos primitivos)
3) no es posible tener acceso a los metodos/funciones/atributos de un objeto
   o struct apuntado, al menos de forma directa. Lo que se recomienda es sacar una
   copia local del valor apuntado, trabajar sobre la copia local y luego escribir
   la variable apuntada con el valor de la copia local.
4) cuando enviamos hacia el ambito externo, la variable en el ambito original
   debe de llevar antes el simbolo & (asi como haciamos con los tipos primitivos)
*/

/*hacer una funcion void que reciba un string apuntado
y lo altere pasandolo todo a mayusculas*/
void mayusculas(string *cadena){  //regla 1
	//sacamos una copia local del valor de la variable apuntada (regla 3)
	string copia = *cadena; //regla 2
	//trabajamos sobre la copia local (regla 3)
	transform(copia.begin(), copia.end(), copia.begin(), ::toupper);
	//sobreescribir el valor de la variable apuntada con el valor de la copia
	*cadena = copia; //regla 2 y 3
}
/*hacer una funcion void que reciba un string apuntado
y lo altere reemplazando los espacios en blanco por guiones bajos*/
void reemplazarGuionesPorEspacios(string *cadena){
	//hacer la copia
	string copia = *cadena;
	//trabajar sobre la copia
	for( int i = 0; i < copia.length(); i++ )
		if( copia[i] == ' ' )
			copia[i] = '_';
	//sobreescribir el valor de la variable apuntada con el valor de la copia
	*cadena = copia;
}







