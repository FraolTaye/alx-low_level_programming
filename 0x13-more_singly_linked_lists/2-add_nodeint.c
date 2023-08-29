#include "lists.h"
/**
 * add_nodeint - it automactically adds to the begining
 * @head: the pointre in node one
 * @n: the data to be put in
 * Return: of pointer if the node is new and  NULL for else
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
