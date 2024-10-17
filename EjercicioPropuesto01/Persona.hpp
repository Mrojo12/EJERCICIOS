#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Persona
{
public:
	Persona(int edad);
	~Persona();
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	void mostrar();

private:
	bool genero;
	int edad;
	char DNI[10];

	void generarDNI();

};

#endif // PERSONA_HPP
