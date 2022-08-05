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
	int count = 0, len_l;
	arg_l *copy = *head;
	(void) check_return;

	len_l = list_len(*head);
	arr = malloc(sizeof(char*) * (len_l + 1));
	if (arr == NULL)
		return (NULL);

	while (!(is_operator(copy->str)))
	{
		arr[count++] = copy->str;

		if (copy->next != NULL)
			copy = copy->next;
		else
			break;
	}

	arr[count] = NULL;

	*head =  copy;

	return (arr);
}
