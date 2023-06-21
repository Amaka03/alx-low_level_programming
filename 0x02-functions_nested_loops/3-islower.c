#include "main.h"

/**
 * _islower - To check if the given char is lowercase
 * @c: char is to be checked
 * Return: 1 if char is lowercase, otherwise 0(False)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
