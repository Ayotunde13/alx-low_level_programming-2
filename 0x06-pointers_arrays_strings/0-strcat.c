#include "main.h"

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
	int i = 0;
	int x = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (x >= 0)
	{
		*(dest + i) = *(src + x);
		if ((*src + x) == '\0')
			break;
		i++;
		x++;
	}

	return (dest);
}
