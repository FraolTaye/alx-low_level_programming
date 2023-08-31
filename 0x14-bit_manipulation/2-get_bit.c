#include "main.h"
/**
 * get_bit - supposed to give value of bti
 * @n: searchable num
 * @index: its bit index
 * Return: its bitt
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;
	return (bit_val);
}
