//archivo de funciones
#include<iostream>
#include<cmath>
#include<ctime>
#include<stdexcept>
using namespace std;

/*Hacer tres funciones que reciban como parametros un arreglo
y el tamaño del arreglo, dicha funcion debe imprimir
dicho arreglo en pantalla. De las tres funciones una sera
para arreglo de int, otra para arreglo de double y otra mas
para arreglo de float.
IMPORTANTE: como esta funcion no altera nada entonces no
es necesario usar apuntadores.*/
void imprimirArreglo(double arreglo[], int tamanoArreglo){
	cout << "**************************" << endl;
	for( int i = 0; i < tamanoArreglo; i++ )
		cout << arreglo[i] << endl;
}
void imprimirArreglo(float arreglo[], int tamanoArreglo){
	cout << "**************************" << endl;
	for( int i = 0; i < tamanoArreglo; i++ )
		cout << arreglo[i] << endl;
}
void imprimirArreglo(int arreglo[], int tamanoArreglo){
	cout << "**************************" << endl;
	for( int i = 0; i < tamanoArreglo; i++ )
		cout << arreglo[i] << endl;
}

/*hacer una funcion void que reciba un arreglo
de numeros double como apuntador
y que divida todos sus elementos
entre 2 alterando al arreglo en su ambito original*/
void arregloMitad(double *arreglo /*regla 2*/, int tamanoArreglo){
	for( int i = 0; i < tamanoArreglo; i++ )
		arreglo[i] = arreglo[i]/2; //regla 3
}
/*Reglas para apuntadores con arreglos:
1) No es posible caluclar el tamaño de un arreglo desde un ambito externo
2) cuando colocamos un arreglo apuntado como parametro de una
   funcion, no se colocan los brackets []; pero si se coloca el
   signo asterisco antes de la variable del arreglo.
3) Cuando trabajamos con los elementos de un arreglo apuntado, no
   es necesrio en el ambito externo colocarle asterisco a la izquierda.
4) cuando un mandamos a llamar la funcion con apuntador: en el ambito
   de origen para el parametro que es arreglo no es necesario colocar
   el signo de ampersand (&) ya que un arreglo es por naturaleza un
   apuntador de memoria.*/

/*Hacer una funcion void que le enviemos un arreglo apuntado
de numeros double y que le altere todos sus elementos
elevando cada uno de ellos al cuadrado.
desde el main: imprimir el arreglo antes y despues
de aplicarle la funcion*/
void arregloCuadrado(double *arreglo, int tamanoArreglo){
	for( int i = 0; i < tamanoArreglo; i++ )
		arreglo[i] = arreglo[i]*arreglo[i];
}

/*hacer una funcion void que llene todos los elementos de un
arreglo apuntado de numeros enteros con numeros al azar
entre un valor minimo y un valor maximo todos proporcionados
como parametros de la funcion.
IMPORTANTE: el valor minimo no debe superar al valor maximo.*/
void llenarArregloAzar(int *arreglo, int tamanoArreglo, int minimo, int maximo){
	//guard clause
	if( minimo > maximo )
		throw invalid_argument("minimo no debe de superar a maximo");
		
	srand(time(NULL));
	for( int i = 0; i < tamanoArreglo; i++ )
		arreglo[i] = rand()%(maximo-minimo+1)+minimo;
}









