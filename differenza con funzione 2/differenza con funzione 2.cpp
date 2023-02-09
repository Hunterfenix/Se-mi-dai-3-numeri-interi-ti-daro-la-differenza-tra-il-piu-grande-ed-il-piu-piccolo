#include <iostream>



int dif(int a, int b, int c) {
	int r;
	if (a > b)
	{
		if (a > c)
		{
			if (b > c)
			{
				r = a - c;
			}
			else
			{
				r = a - b;
			}
		}
		else
		{
			r = c - b;
		}
	}
	else if (a > c)
	{
		r = b - c;
	}
	else if (b > c)
	{
		r = b - a;
	}
	else
	{
		r = c - a;
	}
	return r;
}

int main()
{
	int a, b, c;

	std::cout << "Se mi dai 3 numeri interi ti daro la differenza tra il piu' grande ed il piu' piccolo" << std::endl
		<< "Inserisci il primo numero: ";
	std::cin >> a;

	std::cout << "Inserisci il secondo numero: ";
	std::cin >> b;

	std::cout << "Inserisci il terzo numero: ";
	std::cin >> c;

	std::cout << "Ecco il risultatto: " << dif(a, b, c);

	return 0;
}