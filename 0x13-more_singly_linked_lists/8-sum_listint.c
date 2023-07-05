#include "lists.h"

/**
 * sum_listint - function tjat return the sum of all tje data of a
 * listint_t list
 * @head: The pointer to tje first node
 *
 * Return: 0 if the list is emptu else tje reslut of tje sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ch = head;

	while (ch != NULL)
	{
		sum += ch->n;
		ch = ch->next;
	}
	return (sum);
}
