#include "main.h"

/**
 * read_cmd - function that reads string input from stdin
 * @argv: array of pointers that contains parameters passed by user as string
 *
 * Return: nothing
 */
exec_l *read_cmd(void)
{
	exec_l *parsedStr = NULL;
	arg_l *parsedAv, *copyP_Av;
	char **arr, *av = NULL, *delim = " \n";
	size_t av_size = 0;
	ssize_t get_l;

	get_l = getline(&av, &av_size, stdin);
	if (get_l == -1)
		av = strdup("exit ");
	if (strcmp(av, "\n") == 0)
		return (NULL);

	parsedAv = tokenize_arg(av, delim);
	copyP_Av = parsedAv;
/*	op_count = count_cmd(parsedAv);
*/	while (copyP_Av != NULL)
	{
		arr = track_cmd(&copyP_Av);
		construct_execL(&parsedStr, arr, copyP_Av);
		if (copyP_Av && (copyP_Av->next != NULL))
			copyP_Av = copyP_Av->next;
		else
			break;
	}

	return (parsedStr);
}
/*
char **tokenize_arg(char
*/
