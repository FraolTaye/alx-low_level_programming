#include "lists.h"
/**
 * add_nodeint_end - supposed to insert a node at the end
 * @head: the first pinter in the list
 * @n: a given data to be put in
 * Return: give a pointer for new node and NULL for else
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
