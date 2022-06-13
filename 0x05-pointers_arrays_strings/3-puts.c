#include "main.h"

/**
 * _puts - Fucntion prototype
 * Description: Prints a string, one character at a time, to stdout
 * @str: The string to print
 * Return: The length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
