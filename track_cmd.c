#include "main.h"

/**
 * track_cmd - check Description
 * @head:
 * @arr:
 *
 * Description: function that scans a ** array that contains commands passed
 * on the terminal which are separated by either ("||", "&&" or ";") and assign
 * value
 * Return: nothing
 */
char **track_cmd(arg_l **head)
{
	char **arr = NULL, *check_return;
	int count = 1;
	arg_l *copy = *head;
	(void) check_return;
/*
	arr = malloc(sizeof(char *) * count);
*/	while (!(is_operator(copy->str)))
	{
		arr = realloc(arr, (sizeof(char*) * ++count));
		if (arr == NULL)
			return (NULL);
		arr[(count - 1)] = copy->str;
		if (copy->next != NULL)
			copy = copy->next;
		else
			break;
	}
	arr = realloc(arr, (sizeof(char*) * ++count));
	if (arr == NULL)
	{
		return (NULL);
	}

	arr[(count - 1)] = copy->str;

	*head =  copy;

	return (arr);
}
