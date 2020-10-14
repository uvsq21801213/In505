run: TD2
	./TD2
	
compil: clean TD2.cc Vecteur.cc Vecteur.h
	g++ -Wall TD2.cc Vecteur.cc -o TD2

clean:
	rm -f TD2
