#include "Vecteur.h"
#include <iostream>

Vecteur::Vecteur() {size=0; content=nullptr;};
Vecteur::Vecteur(int taille) {
	size = taille;
	content = (int*)malloc(sizeof(int)*taille);
	for(int i=0; i<taille; i++) {
		content[i]=0;
	}
};
Vecteur::Vecteur(int taille, int* a) {
	
	size = taille;
	content = a;
	
	
}

int Vecteur::getSize() {return size;};
int* Vecteur::getContent() {return content;};
