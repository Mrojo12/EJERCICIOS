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
		pila.insertar(p);
	}

	cout << "Mostrando las edades de las personas en la pila:" << endl;	
	pila.mostrar();
	Persona* persona = pila.extraer();
	cout << "Extraemos la persona con edad " << persona->getEdad() << endl;
	cout << "Mostrando las edades de las personas en la pila:" << endl;
	pila.mostrar();
	cout << "La edad de la cima de la pila es: " << pila.cima()->getEdad() << endl;
	cout << "La longitud de la pila es: " << pila.getLongitud() << endl;
	
	return 0;
}
