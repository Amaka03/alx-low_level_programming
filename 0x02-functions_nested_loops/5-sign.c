#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: int to check
* Return: 1 and print + 1 if n is greater than zero
* print 0 and return 0 if n is zero
* print - and return -1 if n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
