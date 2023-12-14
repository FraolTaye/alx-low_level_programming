#include "main.h"
/**
* print_binary - supposed to print bin of dec num
* @pn: printable num
*/
void print_binary(unsigned long int pn)
{
	int p, numc = 0; unsigned long int sut;

	for (p = 63; p >= 0; p--)
	{
		sut = pn >> p;
		if (sut & 1)
		{
		_putchar('1');
		numc++;
		}
	else if (sut) _putchar('0');
	}
	if (!numc)
	_putchar('0');
}
