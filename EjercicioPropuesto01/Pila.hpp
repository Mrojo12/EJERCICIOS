#ifndef PILA_HPP
#define PILA_HPP

#include "NodoPila.hpp"

class Pila
{
public:
	Pila();
	~Pila();
	void insertar(Persona* p);
	Persona* extraer();
	Persona* cima();
	void mostrar();
	int getLongitud();

private:
	pnodoPila ultimo;
	int longuitud;

};

#endif // PILA_HPP
