#include "lists.h"

/**
 * add_nodeint - fuction that add node at the begining of linked
 * list.
 * @head: The pointer to the first node.
 * @n: number of dara to be inseted
 *
 * Return: The adress of the new element or Null if faled.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
