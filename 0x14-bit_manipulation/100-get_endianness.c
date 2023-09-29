#include "main.h"
/**
 * get_endianness - supposed to see if little or big
 * Return: if big 0 and 1 if little
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *c = (char *) &s;

	return (*c);
}

