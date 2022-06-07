#include <stdio.h>

/**
 * main - Program entry point
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int x = 0;
	unsigned long int y = 1;
	unsigned long int z = 0;

	for (i = 0; i < 98; i++)
	{
		z = x + y;
		x = y;
		y = z;

		printf("%lu", z);

		if (i < 97)
			printf(", ");
	}

	putchar('\n');

	return (0);
}
