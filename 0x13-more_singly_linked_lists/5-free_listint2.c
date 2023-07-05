#include "lists.h"

/**
 * free_listint2 - function tjat free listint_t list
 * @head: The pointer to the forst node
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *ch;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ch = (*head)->next;
		free(*head);
		*head = ch;
	}
	*head = NULL;
}
