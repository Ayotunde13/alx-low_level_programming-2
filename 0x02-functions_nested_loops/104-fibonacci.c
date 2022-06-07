#include <stdio.h>

/**
 * main - Program entry point
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int x = 1;
	unsigned long int y = 2;
	unsigned long int z;

	for (i = 0; i < 98; i++)
	{
		z = x + y;
		x = y;
		y = z;

		printf("%lu\n", z);

		if (i < 97)
			printf(", ");
	}

	putchar('\n');

	return (0);
}
