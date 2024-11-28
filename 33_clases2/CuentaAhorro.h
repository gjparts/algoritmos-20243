//clase CuentaAhorro
#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class CuentaAhorro{
	private:
		float saldo;
	public:
		string cliente;
		//constructor
		CuentaAhorro(string cliente){
			this->cliente = cliente;
			this->saldo = 0;
		}
		//metodos
		float getSaldo(){
			return this->saldo;
		}
		void depositar(float monto){
			if( monto < 0 )
				throw invalid_argument("monto a depositar no puede ser un numero negativo");
			else
				this->saldo += monto; //se acepta y se suma
		}
		void retirar(float monto){
			if( monto < 0 )
				throw invalid_argument("monto a retirar no puede ser un numero negativo");
			else{
				if( monto > this->saldo )
					throw invalid_argument("monto a retirar supera al saldo actual");
				else
					this->saldo -= monto; //se acepta y se resta
			}
		}
};

#endif
