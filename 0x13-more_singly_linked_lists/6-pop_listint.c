#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a linked list
 * @head: the pointer of the first element in the linked list
 *
 * Return: data in the deleted elements, or 0 when list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
