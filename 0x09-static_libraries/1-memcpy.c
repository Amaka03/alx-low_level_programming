#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory where it is stored
 *@src: memory where it is copied
 *@n: the number of bytes
 *
 *Return: the copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
