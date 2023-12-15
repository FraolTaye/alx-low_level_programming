#include "main.h"
/**
 * binary_to_uint -supposed to convert bit num to unsigned integer
 * @b: the bin number
 * Return: the num converted
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_val = 0;

	while (!b)
		return (0);
	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[k] - '0');
	}
	return (dec_val);
}
