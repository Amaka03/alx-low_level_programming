#include "main.h"

/**
 * append_text_to_file - at the end of a file, append text.
 * @filename: points to the name of the file.
 * @text_content: the string that is to be added at the end of the file.
 * Return: -1 if it fails or the filename is NULL
 *         -1 if the file does not exist
 *          or the permission to write the file is not granted
 *          1 if the file exists.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int e, wrt, lgth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lgth = 0; text_content[lgth];)
			lgth++;
	}

	e = open(filename, O_WRONLY | O_APPEND);
	wrt = write(e, text_content, lgth);

	if (e == -1 || wrt == -1)
		return (-1);

	close(e);

	return (1);
}
