#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint -supposed to convert bit num to unsigned integer
 * @b: the bin number
 * Return: the num converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
