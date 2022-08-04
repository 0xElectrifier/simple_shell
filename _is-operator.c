#include "main.h"

/**
 * is_operator - function that checks if string is a shell logic operator
 * or separator (||, && or ;)
 * @str: string to be checked
 *
 * Return: it index in the array which can be used to track it using macro's
 */
int is_operator(char *str)
{
	int i;
	char *s[4] = {NULL, "||", "&&", ";"};


	if (str == NULL)
		return (0);

	for(i = 1; s[i] && (i < 4); i++)
	{
		if (strcmp(s[i], str) == 0)
			return (i);
	}

	return (0);
}
