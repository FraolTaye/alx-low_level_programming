#include "lists.h"
/**
 * insert_nodeint_at_index - supposed to enter a new one
 * at a given position
 * @head: the pointer at the beginning
 * @idx: the entered new data
 * @n: the data to enter
 * Return: the pointer and NULL if not possible
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int f;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (f = 0; temp && f < idx; f++)
	{
		if (f == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}

