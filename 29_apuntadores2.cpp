#include<iostream>
#include "29_apuntadores2.h"
using namespace std;

int main(){
	double n = 9;
	cout << "n antes de elevar: " << n << endl;
	elevar(&n,3);
	cout << "n despues de elevar: " << n << endl;
	
	return 654;
}
