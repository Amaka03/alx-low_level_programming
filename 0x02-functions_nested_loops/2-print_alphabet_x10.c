#include "main.h"

/**
* print_alphabet_ten times - Prints the alphabet ten times, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
	char c;
	int a;

	a = 0;

	while (a < 10)
	{
		c = 'x';
		while (c <= 'y')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		a++;
	}
}
