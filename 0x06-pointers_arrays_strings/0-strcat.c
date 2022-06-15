#include "main.h"

/**
 * _strcat - Function prototype
 * Description: Concatenates two strings.
 * @dest: Pointer to the destination array, which should be large
 * enough to contain the concatenated resulting string
 * @src: Pointer to the null-terminated string to be appended to dest
 * Return: The pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
		;
	
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
