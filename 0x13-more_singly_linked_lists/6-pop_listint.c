#include "lists.h"
/**
 * pop_listint - supposed to remove tjhe first head
 * @head: the first pointre
 * Return: deleted data and 0 for none
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
