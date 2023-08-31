#include "main.h"
/**
 * set_bit - supposde to arrange any 1 to any index
 * @n: the pointer of the num
 * @index: the setted bit of value 1
 * Return: if succes 1 and -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
