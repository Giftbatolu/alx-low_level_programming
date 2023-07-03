#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list - functoin that free list
 * @head: The pointer to the list
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *ch;

	while (head)
	{
		ch = head->next;
		free(head->str);
		free(head);
		head = ch;
	}
}
