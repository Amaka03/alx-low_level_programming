#include "main.h"

/**
 * flip_bits - to cnt the bits number to be changed
 * to get from one number to another
 * @n: number one
 * @m: number two
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, cnt = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		curr = excl >> x;
		if (curr & 1)
			cnt++;
	}

	return (cnt);
}
