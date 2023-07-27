#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this function like thing returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h if success
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
