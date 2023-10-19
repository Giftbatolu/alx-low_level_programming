#include "lists.h"

/**
 * list_len - function that print the lenght of linked list.
 * @h: The pointer ot the linked lists.
 *
 * Return: The lenght of linked list.
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
