#include "main.h"

/**
 * get_endianness - to check whether a machine is big or little endian
 * Return: if big return 0 or 1 for little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *ch = (char *) &x;

	return (*ch);
}
