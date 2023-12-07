#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: var rep a pointer to head of the list
 * Return:no value returned
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
