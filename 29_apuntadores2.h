//funciones
#include<iostream>
#include<cmath>
using namespace std;

/*Hacer una funcion void que eleve a determinada potencia
el valor de la variable que le enviemos.
La funcion debe afectar a la variable enviada como base en su
ambito de origen (se recomienda usar apuntadores).
La funcion recibira dos numeros: exponente y base.
Se recomienda usar double. Pueden usar pow.*/
void elevar(double *base, double exponente){
	//el exponente no va a recibir cambios, por lo tanto
	//no es necesario apuntarlo.
	*base = pow(*base,exponente);
}
/*Hacer una funcion void que mediante
apuntadores divida a la mitad el numero
que le enviemos como parametro.
Dicha funcion debe soportar solo float.*/
void mitad(float *numero){
	*numero = *numero/2;
}
/*hacer una funcion void que mediante apuntadores
eleve al cubo un numero entero enviado como parametro.
-> Sin usar pow.*/
void cubo(int *numero){
	*numero = *numero * *numero * *numero;
}





