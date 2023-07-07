#include <stdio.h>
#include "main.h"

/**
 * _atoi - that converts a string to an integer
 * @s: string that is to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int u, v, w, x, y, z;

	u = 0;
	v = 0;
	w = 0;
	x = 0;
	y = 0;
	z = 0;

	while (s[x] != '\0')
		x++;

	while (u < x && y == 0)
	{
		if (s[x] == '-')
			++v;

		if (s[u] >= '0' && s[u] <= '9')
		{
			z = s[u] - '0';
			if (v % 2)
				z = -z;
			w = w * 10 + z;
			y = 1;
			if (s[u + 1] < '0' || s[u + 1] > '9')
				break;
			y = 0;
		}
		u++;
	}

	if (y == 0)
		return (0);

	return (w);
}

/**
 * main - that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
