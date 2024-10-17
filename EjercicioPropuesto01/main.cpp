#include <Pila.hpp>

int main(int argc, char **argv)
{
	int n = 10;
	int a[n];
	Pila pila;

	// Creamos las edades de las personas
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 18;
	}

	// Creamos las personas y las introducimos en la pila
	for (int i = 0; i < n; i++)
	{
		Persona* p = new Persona(a[i]);
		p->mostrar();
		pila.insertar(p);
	}

	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	
	return 0;
}
