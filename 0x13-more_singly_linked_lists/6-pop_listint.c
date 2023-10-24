#include "lists.h"

/**
 * pop_listint - function that delete the head node of listint_t list
 * @head: The pointer to the head node.
 *
 * Return: The data of the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
