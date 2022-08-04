#include "main.h"

/**
 * construct_execL - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of head (first element in the list)
 * @str: string to be appended to the list
 *
 * Return: address of the new element, of NULL if it failed
 */
exec_l *construct_execL(exec_l **head, char **arr, arg_l *parsedAv)
{
	exec_l *copy, *new;
	char *temp;

	copy = *head;
	new = malloc(sizeof(exec_l));
	if (new == NULL)
		return (NULL);

	if (parsedAv == NULL)
		temp = NULL;
	else
		temp = parsedAv->str;

	new->argv = arr;
	new->op = is_operator(temp);
	new->next = NULL;

	if (copy == NULL)
		*head = new;
	else
	{
		while (copy->next != NULL)
			copy = copy->next;
		copy->next = new;
	}
	return (*head);
}
