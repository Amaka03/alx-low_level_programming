#include "main.h"

/**
 * get_bit - to return the value of a bit at a given index
 * @n: the number to be searched
 * @index: the bit index
 * Return: the bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
