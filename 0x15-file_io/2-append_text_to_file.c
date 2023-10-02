#include "main.h"
/**
 * append_text_to_file - supposed to append
 * @filename: it is the file poitner
 * @text_content: it is the file added string
 * Return: -1 when fail or NULL or inexist or doesnt have writ permmsison
 * and 1 for else
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int myf = 0;
	int rt = 0;
	int count = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	myf = open(filename, O_WRONLY | O_APPEND);
	rt = write(myf, text_content, count);
	if (myf == -1 || rt == -1)
		return (-1);
	close(myf);
	return (1);
}
