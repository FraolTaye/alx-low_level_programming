#include "lists.h"
/**
 * listint_len - supposed to retun the list num
 * @h: the transvesed link list
 * Return: the node num
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
