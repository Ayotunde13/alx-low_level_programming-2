#include "main.h"

/**
 * puts2 - Fucntion prototype
 * Description: Prints every other character of a string, one character at a time, to stdout
 * @str: The string to print
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
