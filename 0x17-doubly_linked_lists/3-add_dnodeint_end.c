i#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 *
 * @head: var rep the head of the list
 * @n: var rep the value of the element
 * Return: returns tha the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (new_node);
}
