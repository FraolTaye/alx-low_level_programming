#include "main.h"
/**
* flip_bits - supposed to count the amount of bits
* @fn: the num one
* @sn: the num on two
* Return: the bit num
*/
unsigned int flip_bits(unsigned long int fn, unsigned long int sn)
{
	int r, snt = 0;
	unsigned long int dex;
	unsigned long int mul = fn ^ sn;

	for (r = 63; r >= 0; r--)
	{
		dex = mul >> r;
		if (dex & 1)
			snt++;
	}
	return (snt);
}
