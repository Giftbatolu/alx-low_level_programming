#include "lists.h"

/**
 * reverse_listint - function that reverse a listint_list
 * @head:The pointer to the first node
 *
 * Return:a pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
