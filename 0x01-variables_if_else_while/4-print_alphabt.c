#include <stdio.h>

/**
 * main - program entry point
 * Description: Print the alphabet except q and e in lowercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
