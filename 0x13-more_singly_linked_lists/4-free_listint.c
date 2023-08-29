#include "lists.h"
/**
 * free_listint - suppose to free the list
 * @head: the fred list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
