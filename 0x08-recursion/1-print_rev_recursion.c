#include "main.h"

/**
 * _print_rev_recursion - that prints a string in reverse.
 * @s: the string that is to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
