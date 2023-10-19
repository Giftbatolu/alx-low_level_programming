#include "lists.h"

/**
 * print_list - function that print all the elements of linked list.
 * @h: The pointer to linked list.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (b)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		b++;
	}
	return (b);
}
