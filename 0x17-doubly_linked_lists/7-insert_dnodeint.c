#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 *
 * @h: var rep the head of the list
 * @idx: var rep the index of the new node
 * @n: var rep the value of the new node
 * Return: returns the the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
	}

	while (i < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next == new_node)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
