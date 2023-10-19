#include "lists.h"

/**
 * add_node_end - function that add node at the end of linked list.
 * @head: The double pointer to the linked list.
 * @str: The string to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_ptr;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_ptr = malloc(sizeof(list_t));
	if (!new_ptr)
		return (NULL);
	new_ptr->str = strdup(str);
	new_ptr->len = len;
	new_ptr->next = NULL;
	if (*head == NULL)
	{
		*head = new_ptr;
		return (new_ptr);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_ptr;
	return (new_ptr);
}
