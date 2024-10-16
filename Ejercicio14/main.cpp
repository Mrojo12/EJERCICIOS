#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct persona
{
	char nombre[30];
	int edad;
	long telefono;
};

void Escribir(persona p)
{
	cout << p.nombre << " tiene " << p.edad << " anos y su telefono es " << p.telefono << endl;
	cout << endl;
}

void EscribirPuntero(persona* p)
{
	cout << p->nombre << " tiene " << p->edad << " anos y su telefono es " << p->telefono << endl;
	cout << endl;
}

persona CrearPersona(char n[30], int e, long t)
{
	persona aux;
	strcpy(aux.nombre, n);
	aux.edad = e;
	aux.telefono = t;
	
	return aux;
}

int main(int argc, char **argv)
{
	persona ejemplo;

	ejemplo = CrearPersona((char*)"Juan", 25, 123456789);
	
	cout << "Paso por valor" << endl;
	Escribir(ejemplo);
	cout << endl;

	ejemplo = CrearPersona((char*)"Pedro", 30, 987654321);

	cout << "Paso por referencia" << endl;
	EscribirPuntero(&ejemplo);
	cout << endl;
	
	return 0;
}
