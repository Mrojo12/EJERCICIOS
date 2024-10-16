#include <iostream>

using namespace std;

void machaca1(int x, int* y)
{
	*y = x;
}

void machaca2(int x, int& y)
{
	y = x;
}

int main(int argc, char **argv)
{
	int a, b;

	cout << "Escribe dos numero enteros: " << endl;
	cin >> a >> b;

	int copia = b;

	cout << "Antes de machaca1: a = " << a << ", b = " << b << endl;
	machaca1(a, &b);
	cout << "Despues de machaca1: a = " << a << ", b = " << b << endl;

	b = copia;

	cout << "Antes de machaca2: a = " << a << ", b = " << b << endl;
	machaca2(a, b);
	cout << "Despues de machaca2: a = " << a << ", b = " << b << endl;
	
	return 0;
}
