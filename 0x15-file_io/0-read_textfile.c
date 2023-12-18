#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- the txt files are supposed to be read
 * @filename: the txt flies
 * @letters: the letters num
 * Return: the amount of bytes w- and 0 if fail and NULL filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	ssize_t rt;
	ssize_t re;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	re = read(n, buffer, letters);
	rt = write(STDOUT_FILENO, buffer, re);

	free(buffer);
	close(n);
	return (rt);
}
