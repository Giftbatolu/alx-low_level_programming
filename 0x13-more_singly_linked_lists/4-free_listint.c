#include "lists.h"

/**
 * free_listint - function that free listint_t linked list
 * @head: The pointet to the first node
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *ch;

	while (head != NULL)
	{
		ch = head->next;
		free(head);
		head = ch;
	}
}
