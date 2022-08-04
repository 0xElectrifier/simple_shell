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
	char **arr;
	int count = 0;
	arg_l copy = *head;

	while (!(is_operator(copy->str)))
	{
		realloc(arr, (sizeof(char*) * ++count));
		arr[(count - 1)] = copy->str;

		if (copy->next != NULL)
			copy = copy->next;
		else
			break;
	}
	realloc(arr, (sizeof(char*) * ++count));
	arr[(count - 1)] = NULL;

	*head =  copy;

	return (arr);
}
