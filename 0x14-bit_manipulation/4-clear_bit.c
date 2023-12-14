#include "main.h"
/**
* clear_bit - supposed to arrange 0 to any bit
* @pn: the num pointed
* @bidx: the clearable index
* Return: if sucessful 1 and -1 if fail
*/
int clear_bit(unsigned long int *pn, unsigned int bidx)
{
	if (bidx > 63)
		return (-1);
	*pn = (~(1UL << bidx) & *pn);
	return (1);
}
