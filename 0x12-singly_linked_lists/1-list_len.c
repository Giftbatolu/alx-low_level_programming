#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - function that return an element of a linked list
 * @h: The pointer to the linked list
 *
 * Return: number of the element
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
