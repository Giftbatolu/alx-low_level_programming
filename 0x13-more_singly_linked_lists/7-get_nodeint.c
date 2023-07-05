#include "lists.h"

/**
 * get_nodeint_at_index - function that return the nth node of
 * a listint_t list
 * @head: The pointer to the first node
 * @index: The index of tje node
 *
 * Return: if the node does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ch = head;
	unsigned int b = 0;

	while (ch && b < index)
	{
		ch = ch->next;
		b++;
	}
	return (ch ? ch : NULL);
}
