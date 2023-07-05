#include "lists.h"

/**
 * add_nodeint_end - funcrion that add new node at the end of listint
 * linked list
 * @head: The pointer to the first node
 * @n: The new node
 *
 * Return: if it succeded return address of the new node else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ch = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ch->next)
		ch = ch->next;
	ch->next = new_node;
	return (new_node);
}
