#include "main.h"

/**
 * _isupper - uppercase letters
 * @i: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}
