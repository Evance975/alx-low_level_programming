#include "lists.h"

/**
 * reverse_listint - the function that reverses items in a linked list
 * @head: the variable rep the pointer to the first node in the list
 * Return: the pointer to the 1st node in the newly created list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
