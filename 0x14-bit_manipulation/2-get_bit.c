#include "main.h" /**
* get_bit - supposed to give value of bit * @sn: searchable num
* @bidx: its bit index
* Return: its bitt
*/
int get_bit(unsigned long int sn, unsigned int bidx)
{
	int bv;

	if (bidx > 63) return (-1);
	bv = (sn >> bidx) & 1;
	return (bv); 
}
