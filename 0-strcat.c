#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: First string to be concatenated
 * @src: Appends src to dest
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *s;
	int i, j/*, len_src*/;

	s = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		s[i] = dest[i];
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		s[i] = src[j];
		i++;

	}

	dest = s;

	return (dest);
}
