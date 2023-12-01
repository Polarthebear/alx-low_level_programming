#include "main.h"

/**
 * append_text_to_file - Main entry point
 * Description: append text to end of file
 * @filename: pointer to file name
 * @text_content: string to be added to end of file
 * Return: -1 (Fail or NULL filename) or 1 (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int leng, w, o = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, leng);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
