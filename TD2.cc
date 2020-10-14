#include "Vecteur.h"
#include <iostream>

using namespace std;


int main() {
	
	Vecteur v1();
	Vecteur v2(4);
	
	int *a = {1,3,2,34,5};
	
	Vecteur v3(4,a);
	
	cout << v2.getSize();
	
	for (int i=0; i<v2.getSize(); i++) {
		cout << v2.getContent()[i];
	}
}
