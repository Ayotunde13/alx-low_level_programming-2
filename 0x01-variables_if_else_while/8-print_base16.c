#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * Description: Prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
