#include "main.h"
/**
 * create_file - suppose to be a file creator
 * @filename: the file pointer creator
 * @text_content: the stirng pointre
 * Return: -1 when function fail and 1 for else
 */
int create_file(const char *filename, char *text_content)
{
	int myf = 0;
	int out = 0;
	int coutl = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (coutl = 0; text_content[coutl];)
			coutl++;
	}
	myf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	out = write(myf, text_content, coutl);
	if (myf == -1 || out == -1)
		return (-1);
	close(myf);
	return (1);
}
