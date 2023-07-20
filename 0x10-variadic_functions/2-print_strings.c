#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between strings.
 * @n: the number of strings passed to the function.
 * @...: a variable number of strings to be printed.
 *
 * Description: if separator is NULL, it is not printed.
 *              if one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *st;
	unsigned int ind;

	va_start(strings, n);

	for (ind = 0; ind < n; ind++)
	{
		st = va_arg(strings, char *);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
