#include "main.h"
/**
 * flip_bits - supposed to count the amount of bits
 * @n: the num one
 * @m: the num on two
 * Return: the bit num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (r = 63; r >= 0; r--)
	{
		current = exclusive >> r;
		if (current & 1)
			count++;
	}

	return (count);
}
