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
