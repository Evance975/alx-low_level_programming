#include "lists.h"

/**
 *  print_dlistint - func that prints all the elements of a dlistint_t list
 *  @h: var rep pointer to the head of the list
 *
 *  Return: returns number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
