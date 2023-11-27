#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- to read a text file and print to STDOUT.
 * @filename: the text file to be read
 * @letters: the number of letters that is to be read and print
 * Return: write- the actual number of letters to be read and printed
 *         if write fails or if filename is NULL, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t y;
	ssize_t wt;
	ssize_t z;

	y = open(filename, O_RDONLY);
	if (y == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	z = read(y, x, letters);
	wt = write(STDOUT_FILENO, x, z);

	free(x);
	close(y);
	return (wt);
}
