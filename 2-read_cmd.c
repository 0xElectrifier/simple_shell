#include "main.h"

/**
 * read_cmd - function that reads string input from stdin
 * @argv: array of pointers that contains parameters passed by user as string
 *
 * Return: nothing
 */
char **read_cmd(void)
{
	char **parsedStr, *pStr, *av = NULL, *delim = " \n";
	size_t av_size = 0, i = 0;
	ssize_t get_l;

	get_l = getline(&av, &av_size, stdin);
	if (get_l == -1)
		av = strdup("exit ");
	if (strcmp(av, "\n") == 0)
		return (NULL);

	parsedStr = malloc(sizeof(char) * _strlen(av));
	if (parsedStr == NULL)
		_perror(EXIT_FAILURE);

	pStr = strtok(av, delim);
	while (pStr)
	{
		parsedStr[i++] = strdup(pStr);
		pStr= strtok(NULL, delim);
	}
	parsedStr[i] = NULL;

	return (parsedStr);
}
