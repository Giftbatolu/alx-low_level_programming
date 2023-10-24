#include "lists.h"

/**
 * delete_nodeint_at_index - function that deleye index at a given
 * index of a linked list.
 * @head: The piinter to the first node.
 * @index: The index of the node to be deleyted.
 *
 * Return: 1 if successed else -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int b = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (b < index - 1)
	{
		if (!temp || !(temp->next))
		return (-1);
		temp = temp->next;
		b++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
