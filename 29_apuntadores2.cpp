#include<iostream>
#include "29_apuntadores2.h"
using namespace std;

int main(){
	double n = 9;
	cout << "n antes de elevar: " << n << endl;
	elevar(&n,3);
	cout << "n despues de elevar: " << n << endl;
	
	float num = 7;
	mitad(&num);
	cout << num << endl;
	
	int x = 4;
	cubo(&x);
	cout << x << endl;
	
	return 654;
}
