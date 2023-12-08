#include "lists.h"

/**
 * dlistint_len - function that return the lenght of the elemnet of
 * double linked list.
 * @h: The pointer to the head node.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t b;

	b = 0;
	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
