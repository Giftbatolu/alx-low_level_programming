#include "lists.h"

/**
 * add_node - function that add node at the beginning of linked
 * lists
 * @head: The double pointer to the linked list.
 * @str: The str to be duplicated.
 *
 * Return: The adress of the new element, if failed return NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_ptr;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_ptr = malloc(sizeof(list_t));
	if (!new_ptr)
		return (NULL);
	new_ptr->str = strdup(str);
	new_ptr->len = len;
	new_ptr->next = (*head);
	(*head) = new_ptr;
	return (*head);
}
