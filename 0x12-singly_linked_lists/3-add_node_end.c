#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - function that add new node at the end of list
 * @head: the pointer to the list
 * @str: The string
 *
 * Return: The address of the new element if success othewise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ch_node;
	size_t b;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (b = 0; str[b]; b++)
		;
	new_node->len = b;
	new_node->next = NULL;
	ch_node = *head;
	if (ch_node == NULL)
		*head = new_node;
	else
	{
		while (ch_node->next != NULL)
			ch_node = ch_node->next;
		ch_node->next = new_node;
	}
	return (*head);
}
