#include <unistd.h>

void case1(void)
{
	write(1, "o\n", 2);
}

void case2(int y)
{
	write(1, "o\n", 2);
	for (int i = 0; i < y - 2; i++)
	{
		write(1, "|\n", 2);
	}
	write(1, "o\n", 2);
}

void case3(int x)
{
	write(1, "o", 1);
	for (int i = 0; i < x - 2; i++)
	{
		write(1, "-", 1);
	}
	write(1, "o\n", 2);
}

void case4(int x, int y)
{
	write(1, "o", 1);
	for (int i = 0; i < x - 2; i++)
	{
		write(1, "-", 1);
	}
	write(1, "o\n", 2);
	for (int j = 0; j < y - 2; j++)
	{
		write(1, "|", 1);
		for (int i = 0; i < x - 2; i++)
		{
			write(1, " ", 1);
		}
		write(1, "|\n", 2);
	}
	write(1, "o", 1);
	for (int i = 0; i < x - 2; i++)
	{
		write(1, "-", 1);
	}
	write(1, "o\n", 2);
}

void draw_rectangle(int x, int y)
{
	write(1, "o", 1);
	for (int i = 0; i < x - 2; i++)
	{
		write(1, "-", 1);
	}
	write(1, "o\n", 2);
	for (int j = 0; j < y - 2; j++)
	{
		write(1, "|", 1);
		for (int i = 0; i < x - 2; i++)
		{
			write(1, " ", 1);
		}
		write(1, "|\n", 2);
	}
	write(1, "o", 1);
	for (int i = 0; i < x - 2; i++)
	{
		write(1, "-", 1);
	}
	write(1, "o\n", 2);
}

void rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return;
	if (x == 1 && y == 1)
	{
		case1();
		return;
	}
	if (x == 1)
	{
		case2(y);
		return;
	}
	if (y == 1)
	{
		case3(x);
		return;
	}
	if (x == 5 && y == 3)
	{
		case4(x, y);
		return;
	}
	draw_rectangle(x, y);
}
