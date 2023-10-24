#include "lists.h"

/**
 * print_listint - function that print all element of linked lists.
 * @h: The pointer ti the linked lists.
 *
 * Return: The number present in linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
