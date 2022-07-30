#include "main.h"

/**
 * read_cmd - function that reads string input from stdin
 * @argv: array of pointers that contains parameters passed by user as string
 *
 * Return: nothing
 */
char **read_cmd(void)
{
	char **parsedStr, *pStr, *av = NULL;
	size_t av_size = 0, i = 0;

	if (getline(&av, &av_size, stdin) == -1)
		perror("Error:");


	printf("%s\n", av);
	parsedStr = malloc(sizeof(char) * _strlen(av));
	if (parsedStr == NULL)
		exit(EXIT_FAILURE);

	pStr = strtok(av, " ");
	while (pStr != NULL)
	{
		parsedStr[i++] = strdup(pStr);
		pStr= strtok(NULL, " ");
	}
	parsedStr[i] = NULL;

	return (parsedStr);
}
