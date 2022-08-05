#include "main.h"

/**
 * list_len - check Description
 * @h: pointer to the 'head'/first element of the linked list
 *
 * Description: function that loops through a arg_l list and checks how many
 * nodes exist that doesn't contain a seperator element or NULL in it ->str
 * element
 * Return: number of elements in the linked list
 */
size_t list_len(const arg_l *h)
{
	unsigned int node_count = 0;

	while ((h != NULL) && !(is_operator(h->str)))
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
