#include "main.h"

/**
 * _strspn - Function prototype
 * Description : Locates the first occurrence in the string s of any of the bytes
 * in the string accept
 * @s: Pointer to the string to search
 * @accept: Pointer to the string that contains the characters to match
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	int val = 0;

	for (i = 0;; i++)
	{
		for (x = 0; accept[x] > '\0'; x++)
		{
			if (s[i] != accept[x])
				continue;
			val++;
			break;
		}
		if (accept[x] == '\0')
			break;
	}

	return (val);
}
