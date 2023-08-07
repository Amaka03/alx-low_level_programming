#include "main.h"

/**
 * create_file - that creates a file.
 * @filename: points to the name of the file to be created.
 * @text_content: points to a string to write to the file.
 * Return: 1 when successful, -1 when it fails
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, lgth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lgth = 0; text_content[lgth];)
			lgth++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, lgth);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
