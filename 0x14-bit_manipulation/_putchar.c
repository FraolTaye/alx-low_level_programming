#include "main.h"
#include <unistd.h>
/**
 * _putchar - on stdut it werties the char
 * @c: printabkle char
 * Return: 1 sucess and -1 when errored
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
