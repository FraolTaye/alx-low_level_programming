#include "main.h"
/**
* set_bit - supposde to arrange any to any index
* @pn: the pointer of the num
* @bidx: the setted bit of value 1
* Return: if succes 1 and -1 if fail
*/
int set_bit(unsigned long int *pn, unsigned int bidx)
{
	if (bidx > 63)
		return (-1);
	*pn = ((1UL << bidx) | *pn);
	return (1);
}
