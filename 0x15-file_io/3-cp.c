#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *myf);
void close_file(int md);
/**
 * create_buffer - suppossed to assign 1024 byte
 * @myf: strong char names
 * Return: the buffer that is new given
 */
char *create_buffer(char *myf)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf)
	{
		dprintf(STDERR_FILENO
				"Error: Can't write to %s\n", myf);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - suppose to shut off the descriptors
 * @md: close decsripotor
 */
void close_file(int md)
{
	int k;

	k = close(md);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", md);
		exit(100);
	}
}

/**
 * main - supposed to copy file to another.
 * @argc: argumenmt num
 * @argv: arrgument array pointre.
 * Return: if sucess 0
 * Description: exit code of 97 when count is wrong
 * exit code of 98 when file_from is inexist or caot be read
 * exit file of 99 when file is uncreatable or unwritable
 * exit file of 100 when file_to or file_from is unclosable
 */
int main(int argc, char *argv[])
{
	int outof, whr, a, d;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	outof = open(argv[1], O_RDONLY);
	a = read(outof, buf, 1024);
	whr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

 	do
	{
		if (outof == -1 || a == -1)
 		{
 			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		d = write(whr, buf, a);
		if (whr == -1 || d == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		a = read(outof, buf, 1024);
		whr = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (a > 0);
	free(buf);
	close_file(outof);
	close_file(whr);
	return (0);
}
