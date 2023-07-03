#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - function that add two nodes
 * @head: The pointer to list
 * @str: The string
 *
 * Return: The address of the new element else NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ch;
	unsigned int len = 0;

	while (str[len])
		len++;
	ch = malloc(sizeof(list_t));
	if (!ch)
		return (NULL);
	ch->str = strdup(str);
	ch->len = len;
	ch->next = (*head);
	(*head) = ch;
	return (*head);
}
