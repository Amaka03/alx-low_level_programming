#include "main.h"

/**
* print_last_digit - will print the last digit of a given number.
* @n: Number used to find the last digit.
* Return: the last digit.
*/
int print_last_digit(int n)
{
	int g;

	if (n < 0)
	n = -n;

	g = n % 10;

	if (g < 0)
		g = -g;
	
	_putchar('0' + g);
	return (g);
}

