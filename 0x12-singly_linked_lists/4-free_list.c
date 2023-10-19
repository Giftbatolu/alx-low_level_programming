#include "lists.h"

/**
 * free_list - function that free linked list.
 * @head: The pointer to linked list
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
