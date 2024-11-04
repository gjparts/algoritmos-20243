//aqui van las funciones
#include<iostream>
#include<stdexcept>
#define _USE_MATH_DEFINES //se usa para que math.h o cmath
						  //nos incluya las constantes matematicas
						  //como por ejemplo PI, o logaritmos naturales
#include<cmath>
#include<algorithm>
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
/*7. Escriba una funcion que devuelva true si una cadena
de texto esta escrita toda en mayusculas y false si no es así.*/
bool todoMayusculas(string str){
	//comparar a str con una copia de str que este en mayusculas
	string copia = str;
	transform(copia.begin(), copia.end(), copia.begin(), ::toupper);
	//forma 1: forma tradicional
	/*if( str == copia )
		return true;
	else
		return false;*/
	
	//forma 2: usando el operador ternario
	return ( str == copia ? true : false );
}
/*8. Escriba una funcion a la cual se le proporcione como
parametros un caracter y una cadena de texto, dicha funcion
debera devolver un entero con la posicion de la primer coincidencia
en la que fue encontrado el caracter proporcionado dentro de
la cadena de texto proporcionada, si el caracter no es
encontrado entonces devolver -1.
No tiene permitido utilizar la funcion find del string.*/
int encontrar(char buscado, string cadena){
	for( int i = 0; i < cadena.length(); i++ ){
		if( cadena[i] == buscado )
			return i; //return de la posicion donde encontramos el char buscado
			//no es necesario colocar break para terminar con for
			//porque return termina con la funcion y con cualquier
			//estructura de repeticion dentro de ella.
	}
	//si llego hasta aqui quiere decir que no encontró nada
	return -1;
}

/*9. Escriba una funcion que reciba como parametros un string y un
arreglo de string, dicha funcion debera buscar el string proporcionado
dentro arreglo, si la cadena es encontrada entonces la funcion
retornara un numero entero con la posicion de la primer
coincidencia en la que se encontró, si no se encuentra
nada entonces retornar -1*/
int buscarDentroDeArreglo(string buscar, string arreglo[], int tamanoArreglo){
	//cuando se pasa un arreglo como parametro de una funcion, ya no es
	//posible obtener su tamaño por medio de end() y begin()
	//puesto que ya no nos da acceso a sus direcciones de memoria
	//cout << end(arreglo)-begin(arreglo) << endl;
	//tampoco se puede usando alternativos como sizeof
	//cout << sizeof(arreglo)/sizeof(arreglo[0]) << endl;
	//por lo tanto solo nos queda pedir el tamaño del arreglo como un tercer param.
	for( int i = 0; i < tamanoArreglo; i++ ){
		if( arreglo[i] == buscar )
			return i;  //retornar la posicion donde se encontro
	}
	//si llego aqui entonces no encontro nada:
	return -1;
}











