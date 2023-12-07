#include "lists.h"

/**
 * add_dnodeint -function that  adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: var rep the head of the list
 * @n: var rep the value of the element
 * Return: returns thae the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
