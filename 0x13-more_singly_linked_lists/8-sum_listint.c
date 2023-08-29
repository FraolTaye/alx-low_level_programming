#include "lists.h"
/**
 * sum_listint - supposed to add
 * @head: the node at the top
 * Return: the add output
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
