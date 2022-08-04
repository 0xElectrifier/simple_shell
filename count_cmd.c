#include "main.h"

/**
 * count_cmd - function that counts the numbers of command pass on the terminal
 * through logical or separator operators ("||", "&&" or ";")
 * @str: string to be counted
 *
 * Return: number of commands found
 */
int count_cmd(arg_l *str)
{
	int count = 0;
	arg_l *copy = str;

	while (copy)
	{
		if (is_operator(copy->str))
		{
			count++;
		}
		copy = copy->next;
	}
	return (count);
}
