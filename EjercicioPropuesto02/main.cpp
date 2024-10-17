#include <Cola.hpp>

int main(int argc, char **argv)
{
	int n = 10;
	int a[n];
	Cola c;

	// Creamos las edades
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 18;
	}

	// Creamos las personas  las insertamos en la cola
	for (int i = 0; i < n; i++)
	{
		Persona* p = new Persona(a[i]);
		c.insertar(p);
	}

	// Mostramos la cola
	c.mostrar();
	c.eliminar();
	c.mostrar();
	return 0;
}
