#include "main.h"

/**
 * print_number - Function prototype
 * Description: Prints a number
 * @n: The number to be printed
 * Return: void
 */
void print_number(int n)
{
	int i;
	int x;
	int y;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}

	else
		i = n;

	x = i;
	y = 1;

	while (x > 9)
	{
		x /= 10;
		y *= 10;
	}

	for (; y >= 1; y /= 10)
	{
		_putchar(((i / y) % 10) + 48);
	}
}
