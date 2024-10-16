#include <iostream>

using namespace std;
const int minimo = 0, maximo = 10;

int main(int argc, char **argv)
{
	int n;

	cout << "Introduzca un numero entre " << minimo << " y " << maximo << "." << endl;
	cin >> n;

	if ((n < minimo) || (n > maximo))
	{
		cout << "El valo " << n << "esta fuera de rango." << endl;
	}
	else
	{
		switch (n)
		{
		case 0:
			cout << "No existe definicion de primo para este caso." << endl;
			break;
		case 2:
			cout << "El numero " << n << " es primo." << endl;
			break;
		case 3:
			cout << "El numero " << n << " es primo." << endl;
			break;
		case 5:
			cout << "El numero " << n << " es primo." << endl;
			break;
		case 7:
			cout << "El numero " << n << " es primo." << endl;
			break;
		default:
			cout << "El numero " << n << " no es primo." << endl;
			break;
		}
	}
	
	return 0;
}
