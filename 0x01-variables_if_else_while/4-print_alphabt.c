#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; < 123; i++)
	{
		if (i != 101 && i !=123)
		{
			putchar(i);
		}
	}
		putchar('\n');
		return (0)
}