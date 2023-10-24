#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert node at given index
 * @head: The pointer to the first node in linked list
 * @idx: The index to insert the new node.
 * @n: The data to be insert in the node.
 *
 * Return: The pointer to the new node else NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (b = 0; temp && b < idx; b++)
	{
		if (b == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
