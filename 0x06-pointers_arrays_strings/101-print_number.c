#include "main.h"

/**
 * print_number - Function prototype
 * Description: Prints a number
 * @n: The number to be printed
 * Return: void
 */
void print_number(int n)
{
	int d = 0;
	int i;
	int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (i = 0; n / d > 9; i++, d *= 10)
	{
	}

	for (; d >= 1; n %= d, d /= 10)
	{
		x = n / d;
		_putchar('0' + x);
	}
}
