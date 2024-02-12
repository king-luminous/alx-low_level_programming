#include "main.h"

/**
 * creat_file - create a file
 * @filename: a point pointing to the file to be created
 * @text_content: a point to the string to write to the file
 *
 * Return: if the function fails -1
 *
 */

int create_file(const char *filename, char *text_content);
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_context != NULL)
	{
		for (len = 0; text_context[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(0);
	return (1);
}


