#include "lists.h"

/**
 * pop_listint - function that delete tje head of a listint_t list
 * @head: The pointer to tje first node
 *
 * Return: if succceded retirn the head mode else empty.
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *ch;

	if (!head || !*head)
		return (0);
	value = (*head)->n;
	ch = (*head)->next;
	free(*head);
	*head = ch;
	return (value);
}
