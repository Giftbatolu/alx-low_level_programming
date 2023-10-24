#include "lists.h"

/**
 * add_nodeint_end - function that add not at the end of a listint
 * list.
 * @head: The pointer to the first element of the lintint_t list
 * @n: The data to be inserted in the new element.
 *
 * Return: The adress of the new ement or Null if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
