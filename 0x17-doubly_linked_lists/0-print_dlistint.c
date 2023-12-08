#include "lists.h"

/**
 * print_dlistint - function that ptint all the element of a double
 * linked list.
 * @h: The pointer to the head of double linked list.
 *
 * Return: The number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t b;

	b = 0;
	/*if (h == NULL)*/
	/*	return (b);*/

	while (h)
	{
		printf("%d\n", h->n);
		b++;
		h = h->next;
	}
	return (b);
}
