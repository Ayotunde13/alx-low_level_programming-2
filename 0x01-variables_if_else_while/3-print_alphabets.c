#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Print the alphabet in lowercase first and then in uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
