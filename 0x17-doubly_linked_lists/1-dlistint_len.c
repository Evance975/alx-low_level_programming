#include "lists.h"

/**
 * dlistint_len - func that returns the number
 * of elements in a linked dlistint_t list
 * @h: var rep pointer to the head of the list
 *
 * Return: returns the number of elements in the dlistint
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
