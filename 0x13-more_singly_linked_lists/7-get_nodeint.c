#include "lists.h"

/**
 * get_nodeint_at_index - function that get node at nth inedx.
 * @head: The first node in the linked list.
 * @index: The index of the node.
 *
 * Return: The pointer to the node if exit else NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *temp = head;

	while (temp && b < index)
	{
		temp = temp->next;
		b++;
	}
	return (temp ? temp : NULL);
}
