#include "lists.h"

/**
 * construct_argL - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of head (first element in the list)
 * @str: string to be appended to the list
 *
 * Return: address of the new element, of NULL if it failed
 */
arg_l *construct_argL(arg_l **head, char *str)
{
	arg_l *copy, *new;

	copy = *head;
	new = malloc(sizeof(arg_l));
	if (new == NULL)
		return (NULL);

	new->str = str;
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
