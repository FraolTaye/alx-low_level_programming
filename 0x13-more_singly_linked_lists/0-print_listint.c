#include "lists.h"
/**
 * print_listint - it is supposed to print everything
 * @h: the printed linked lists
 * Return: the nodes num
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

