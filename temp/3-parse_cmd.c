#include "main.h"

/**
 * parse_cmd - function that parses a string, using 
 * @str: string to be parsed
 * @delim: delimiter to be used in parsing
 *
 * Return: jj
 */
char **parse_cmd(char *str)
{
	size_t i = 0;
	char **parsedStr, *pStr;

	parsedStr = malloc(sizeof(char) * _strlen(str));
	if (parsedStr == NULL)
		exit(EXIT_FAILURE);

	pStr = strtok(str, " ");
	while (pStr != NULL)
	{
		parsedStr[i++] = strdup(pStr);
		pStr= strtok(NULL, " ");
	}
	parsedStr[i] = '\0';

	return (parsedStr);
}
