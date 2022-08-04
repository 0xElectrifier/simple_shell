#include "main.h"

/**
 * tokenize_arg - function that breaks a string into tokens
 * @str: string to be tokenized
 * @delim: delimeter to work with
 *
 * Return: pointer to the head of a linked list containing the parsed string
 */
arg_l *tokenize_arg(char *str, char *delim)
{
	char *pStr;
	arg_l *parsedAv = NULL;

	pStr = strtok(str, delim);
	while (pStr)
	{
		construct_argL(&parsedAv, pStr);
		pStr = strtok(NULL, delim);
	}

	return (parsedAv);
}
