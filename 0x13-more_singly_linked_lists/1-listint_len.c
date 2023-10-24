#include "lists.h"

/**
 * listint_len - function that find the length of linked list.
 * @h: The pointer to linked list.
 *
 * Return: length of linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
