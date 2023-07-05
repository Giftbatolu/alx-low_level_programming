#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert node at any given
 * position of a listint_t list
 * @head: The pointer to the first node
 * @idx:The index where the node to be added
 * @n: The new node
 *
 * Return: if it failed return NULL else the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *ch = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (b = 0; ch && b < idx; b++)
	{
		if (b == idx - 1)
		{
			new_node->next = ch->next;
			ch->next = new_node;
			return (new_node);
		}
		else
			ch = ch->next;
	}
	return (NULL);
}
