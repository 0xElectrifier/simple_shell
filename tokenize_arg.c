#include "main.h"

/**
 * tokenize_arg - function that breaks a string into tokens
 * @str: string to be tokenized
 * @delim: delimeter to work with
 *
 * Return: pointer to the head of a linked list containing the parsedStr
 */
arg_l *tokenize_arg(char *str, char *delim)
{
	char pStr;
	arg_l *parsedStr = NULL;

	pStr = strtok(str, delim);
	while (pStr)
		add_node_end(parsedStr, pStr);

	return (parsedStr);
}
