include "main.h"

/**
 * print_binary - to print the binary representing a decimal number
 * @n: printable number in binary
 */
void print_binary(unsigned long int n)
{
	int x, cnt = 0;
	unsigned long int cur;

	for (x = 63; x >= 0; x--)
	{
		cur = n >> x;

		if (cur & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
