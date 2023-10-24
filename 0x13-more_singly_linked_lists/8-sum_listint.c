#include "lists.h"

/**
 * sum_listint - function that calculate sum of all the data of
 * linked list.
 * @head: The first nide of linked list.
 *
 * Return: The summ of all the nodes.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
