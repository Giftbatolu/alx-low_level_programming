#include "lists.h"

/**
 * add_nodeint - function that add a new node at the begining of the
 * listint_t linked list
 * @head: The pointer to the first node.
 * @n: The new node
 *
 * Return: The address of the new node if succeded else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
