#include "lists.h"

/**
 * free_listint - function that free linked list.
 * @head: linked list to be freed.
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
