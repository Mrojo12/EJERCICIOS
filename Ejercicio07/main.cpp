#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	char c;
	bool test;

	cout << "Pulse teclas numericas. Acabe pulsando ESC." << endl;

	do
	{
		c = getchar();
		test = (c >= '0') && (c <= '9');
		if (test)
		{
			cout << c << " pulsado." << endl;
		}
		
	} while (c != 27);
	
	return 0;
}
