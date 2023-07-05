#include "lists.h"

/**
 * listint_len - function that return all the element of listint_t
 * @h: The listint_t to be printed
 *
 * Return: The number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t value = 0;

	while (h != NULL)
	{
		h = h->next;
		value++;
	}
	return (value);
}
