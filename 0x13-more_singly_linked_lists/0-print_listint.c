#include "lists.h"

/**
 * print_listint - function that print all the element of listint_t
 * @h: The head pointer to the forst node
 *
 * Return: The number of the node.
 */
size_t print_listint(const listint_t *h)
{
	size_t value = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		value++;
	}
	return (value);
}
