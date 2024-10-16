#include <Pila.hpp>

int main(int argc, char **argv)
{
	Pila pila;

	pila.insertar(1);
	pila.insertar(2);
	pila.insertar(3);
	pila.insertar(4);
	pila.insertar(5);
	pila.mostrar();

	int cima = pila.cima();
	pila.extraer();
	cout << "\tDespues de esxtraer la cima (" << cima << "):" << endl;

	pila.insertar(6);
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	
	return 0;
}
