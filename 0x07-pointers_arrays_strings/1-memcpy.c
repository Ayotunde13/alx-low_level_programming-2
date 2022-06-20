#include "main.h"

/**
 * _memset - Function prototype
 * Description : Copies n bytes from memory area src to memory area dest
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: Pointer to the source array
 * @n: Number of bytes to copy
 * Return: The pointer to the destination string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
