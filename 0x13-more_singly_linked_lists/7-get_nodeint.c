#include "lists.h"
/**
 * get_nodeint_at_index - supposed to return node
 * @head: the node at the top
 * @index: the index rtrn
 * Return: the pointre and NULL if else
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s = 0;
	listint_t *temp = head;

	while (temp && s < index)
	{
		temp = temp->next;
		s++;
	}
	return (temp ? temp : NULL);
}
