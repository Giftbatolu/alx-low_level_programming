#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete node at the index
 * of a listint_t list
 * @head: Tje pointer to tje first node
 * @index: The index of tje node
 *
 * Return: if it successeded return 1 othetwise 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ch = *head;
	listint_t *new = NULL;
	unsigned int b = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ch);
		return (1);
	}
	while (b < index - 1)
	{
		if (!ch || !(ch->next))
			return (-1);
		ch = ch->next;
		b++;
	}
	new = ch->next;
	ch->next = new->next;
	free(new);
	return (1);
}
