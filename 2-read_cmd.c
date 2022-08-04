#include "main.h"

/**
 * read_cmd - function that reads string input from stdin
 * @argv: array of pointers that contains parameters passed by user as string
 *
 * Return: nothing
 */
char **read_cmd(void)
{
	cmd_s *parsedStr;
	arg_l *parsedAv;
	char *token, **arr, *av = NULL, *delim = " \n";
	size_t av_size = 0, i = 0;
	ssize_t get_l, i, op_count;

	get_l = getline(&av, &av_size, stdin);
	if (get_l == -1)
		av = strdup("exit ");
	if (strcmp(av, "\n") == 0)
		return (NULL);


	parsedAv = tokenize_arg(av, delim);
	copyP_Av = parsedAv;
	op_count = count_cmd(parsedAv);
	for (i = 0; i < op_count; i++)
	while (copyP_Av != NULL)
	{
		arr = track_cmd(&copyP_Av);
		construct_execL(parsedStr, arr, copyP_Av);

		if (copyParsedAv->next != NULL)
			copyParsedAv = copyParsedAv->next;
	}
	parsedStr[i] = NULL;

	return (parsedStr);
}
/*
char **tokenize_arg(char
*/
