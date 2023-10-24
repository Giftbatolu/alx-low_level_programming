#include "lists.h"

/**
 * free_listint2 - function that free linked list.
 * @head: The pointer to the linked list to be freed.
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
