#ifndef VECTEUR_H
#define VECTEUR_H

class Vecteur {
	
	private:
		int* content;
		int size;
	
	public:
		
		Vecteur();
		Vecteur(int taille);
		Vecteur(int taille, int* content);
		//~ Vecteur(Vecteur v);
		int getSize();
		int* getContent();
	
};


#endif
