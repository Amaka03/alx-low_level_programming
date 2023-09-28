#include "main.h"

/**
 * binary_to_uint - to convert a binary number to an unsigned int
 * @b: points to a string containing the binary number
 * Return: the number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		y = 2 * y + (b[x] - '0');
	}

	return (y);
}
