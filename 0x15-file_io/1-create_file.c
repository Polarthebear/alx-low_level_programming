#include "main.h"

/**
 * create_file - Main entry point
 * Description: Create a file
 * @filename: pointer to the name of the file being created
 * @text_content: pointer to string
 * Return: 1 (Success) or -1 (Fail)
 */
int create_file(const char *filename, char *text_content)
{
	int w, leng, fd = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, leng);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
