#include "main.h"

/**
 * _sqrt_recursion - Function prototype
 * Description: Computes the natural square root of a number
 * @n: The number to find the square root of
 * Return: The square root of the number
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	while (1)
	{
		if (n < 0)
			return (-1);
		if (x * x > n)
			return (-1);
		if (x * x == n)
			return (x);

		x += 1;
	}
}
