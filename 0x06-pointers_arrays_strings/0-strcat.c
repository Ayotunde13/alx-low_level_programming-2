#include "main.h"
#include "string.h"

/**
 * _strcat - Function prototype
 * Description: Concatenates two strings.
 * @dest: Pointer to the destination array, which should be large enough
 * to contain the concatenated resulting string
 * @src: Pointer to the null-terminated string to be appended to dest
 * Return: The pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int x = strlen(dest);

	for (i = 0; dest[i]; i++)
	{
		dest[i + x] = src[i];
	}

	dest[i + x] = '\0';

	return (dest);
}
