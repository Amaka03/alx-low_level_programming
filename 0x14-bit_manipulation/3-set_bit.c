#include "main.h"

/**
 * set_bit - to set a bit value to 1 at a given index
 * @n: points to the number to be changed
 * @index: the bit index to set to 1
 * Return: if successful, return 1, or -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
