#include "main.h"
#include <stdio.h>

/**
 * puts_half - Fucntion prototype
 * Description: Prints every other character of a string
 * @str: The string to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}

	 printf("\n");
}
