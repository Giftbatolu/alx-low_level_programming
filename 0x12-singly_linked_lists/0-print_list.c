#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - function that print elements of list
 * @h: The pointer to the list
 *
 * Return: The number of node
 */
size_t print_list(const list_t *h)
{
	size_t ch = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		ch++;
	}
	return (ch);
}
