#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program entry point
 * Description: Print lowercase alphabet letters in reverse
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
