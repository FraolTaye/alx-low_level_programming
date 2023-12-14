#include "main.h"
/**
* binary_to_uint -supposed to convert bit num to unsigned integer * @bi: the bin number
* Return: the num converted
*/
unsigned int binary_to_uint(const char *bi)
{
	int k;
	unsigned int dec_val = 0;

	while (!bi) 
		return (0);
	for (k = 0; bi[k]; k++)
	{
		if (bi[k] < '0' || bi[k] > '1') 
			return (0);
		dec_val = 2 * dec_val + (bi[k] - '0');
	}
	return (dec_val);
}
