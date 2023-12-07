#include "lists.h"

/**
 * get_dnodeint_at_index - funct that returns the nth
 * node of a dlistint_t linked list.
 * @head: var rep the pointer to head of the list
 * @index: var rep the index of the node to search for, starting from 0
 * Return: returns the nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
