#include <stdio.h>

/**
 * main - Program entry point
 * Description: Computes and prints the sum of all the multiples of
 * 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i;
	int z;
	int y;
	int x;

	for (i = 0; i < 1024; ++i)
	{
		if (i % 3 == 0)
			z += i;
		else if (i % 5 == 0)
			y += i;
	}

	x = z + y;

	printf("%i\n", x);

	return (0);
}
