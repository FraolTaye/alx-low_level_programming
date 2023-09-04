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
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
