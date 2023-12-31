#include "lists.h"
/**
 * delete_nodeint_at_index - supposed to remove a node
 * @head: the beginiing node pointer
 * @index: removed to be node
 * Return: 1 (Success) and -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int f = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (f < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		f++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
