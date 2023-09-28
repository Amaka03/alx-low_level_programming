#include "main.h"

/**
 * clear_bit - to set the value of a bit to 0 at an index
 * @n: points to the number to be changed
 * @index: the bit index to be cleared
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
