#include <unistd.h>

void rush(int x, int y)
{

	int contx;
	int conty;

	contx = 0;
	conty = 0;

	// Caso especial para largura e altura iguais a 1
	if (x == 1 && y == 1)
	{
		write(1, "o\n", 2);
		return;
	}

	// Caso especial para largura igual a 1 e altura maior que 1
	if (x == 1)
	{
		write(1, "o\n", 2);
		while (conty < y-2)
		{
			write(1, "|\n", 2);
			conty++;
		}
		write(1, "o\n", 2);
		return;
	}

	// Caso especial para altura igual a 1 e largura maior que 1
	if (y == 1)
	{
		write(1, "o", 1);
		while (contx < x - 2)
		{
			write(1, "-", 1);
			contx++;
		}
		write(1, "o\n", 2);
		return;
	}

	contx = 0;
	conty = 0;

	write(1, "o", 1);
	while (contx < x)
	{
		write(1, "-", 1);
		contx++;
	}
	write(1, "o\n", 2);

	while (conty < y)
	{
		int space = 0;
		write(1, "|", 1);
		while (space < x)
		{
			write(1, " ", 1);
			space++;
		}
		write(1, "|\n", 2);
		conty++;
	}
	contx = 0;
	write(1, "o", 1);
	while (contx < x)
	{
		write(1, "-", 1);
		contx++;
	}
	write(1, "o\n", 2);
}