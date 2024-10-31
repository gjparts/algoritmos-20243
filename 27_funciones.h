//aqui van las funciones
#include<iostream>
#include<stdexcept>
#define _USE_MATH_DEFINES //se usa para que math.h o cmath
						  //nos incluya las constantes matematicas
						  //como por ejemplo PI, o logaritmos naturales
#include<cmath>
using namespace std;
/*1. Escriba una funcion llamada elevar que reciba dos numeros enteros,
	uno para la base y otro para la potencia, la funcion debe retornar un entero
	resultado de elevar el numero base a la potencia sin utilizar la funcion pow.
	-> la potencia no puede ser un numero negativo.*/
//si desea soportar enteros mas grandes que int, recomiendo usar long double
//que es equivante a tener dos variable long unidas
long double elevar(long double base, long double potencia){
	if( potencia < 0 )
		throw invalid_argument("potencia no puede ser un numero negativo.");
	
	long double tmp = 1;
	for( int i = 1; i <= potencia; i++ )
		tmp = tmp * base;
		
	return tmp; //retornar o devolver el resultado.
}
/*2. Defina una funcion llamada hipotenusa que retorne
la longitud de la hipotenusa de un triángulo rectángulo,
la funcion recibira los lados de dicho triangulo.
La funcion debera funcionar con numeros double, se le permite usar sqrt() y pow().*/
double hipotenusa(double opuesto, double adyacente){
	return sqrt( pow(opuesto,2)+pow(adyacente,2) );
}
/*3. Escriba una funcion que reciba dos numeros enteros y retorne true
si el primer numero es multiplo del segundo o false en caso contrario.*/
bool esMultiplo(int dividendo, int divisor){
	//forma tradicional
	/*if( dividento%divisor == 0 )
		return true;
	else
		return false;*/
	return ( dividendo%divisor == 0 ? true : false );
}
/*4. Escriba una funcion que imprima un rectagulo de caracteres,
dicha funcion recibira como parametros el ancho y largo del mismo
asi como otro parametro con el caracter a usar para dibujar
dicho rectangulo.*/
void rectangulo(int ancho, int largo, char caracter){
	for( int i = 1; i <= largo; i++ ){
		for( int j = 1; j <= ancho; j++ ){
			cout << caracter;
		}
		cout << endl;
	}
}
/*5. Hacer una funcion que retorne el area de un circulo,
dicha funcion debera recibir el radio como parametro.
Usando sobrecarga de funciones haga que la funcion pueda
trabajar con numeros double o con numeros float.*/
double areaCirculo(double radio){
	return M_PI*pow(radio,2); //M_PI sale de la libreria math
}
float areaCirculo(float radio){
	return M_PI*pow(radio,2);
}

/*6. Escriba una función llamada minimo que retorne
el menor de tres números, dicha funcion debera poder
funcionar con tres numeros enteros o con
tres numeros double o tres numeros float.
Para evitar hacer lo mismo 3 veces con diferente tipo, se recomienda
reutilizar la funcion que soporte numeros de mayor precision y mandarla
a llamar desde las que usan numeros de menor precision*/
double minimo(double a, double b, double c){
	//de las tres sobrecargas de la funcion esta es la de mayor precision
	if( a <= b && a <= c ) return a;
	if( b <= a && b <= c ) return b;
	if( c <= a && c <= b ) return c;
}
int minimo(int a, int b, int c){
	//reutilizar la funcion de mayor precision
	//para evitar que la funcion se llame a si misma
	//se pasan los int a double para que se mande a llamar la version
	//de la funcion de mayor precision (la que usa puros double)
	double x = a, y = b, z = c;
	return minimo(x,y,z);
}
float minimo(float a, float b, float c){
	//reutilizar la funcion de mayor precision
	//para evitar que la funcion se llame a si misma
	//se pasan los int a double para que se mande a llamar la version
	//de la funcion de mayor precision (la que usa puros double)
	double x = a, y = b, z = c;
	return minimo(x,y,z);
}






