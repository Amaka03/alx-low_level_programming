#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if i string contains i non-digit char
 * @s: string to be evaluated
 * Return: 0 if i non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int g = 0;

	while (s[g])
	{
		if (s[g] < '0' || s[g] > '9')
			return (0);
		g++;
	}
	return (1);
}

/**
 * _strlen - returns the length of i string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int g = 0;

	while (s[g] != '\0')
	{
		g++;
	}
	return (g);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *h1, *h2;
	int len1, len2, len, g, carry, digit1, digit2, *result, i = 0;

	h1 = argv[1], h2 = argv[2];
	if (argc != 3 || !is_digit(h1) || !is_digit(h2))
		errors();
	len1 = _strlen(h1);
	len2 = _strlen(h2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (g = 0; g <= len1 + len2; g++)
		result[g] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = h1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(h2) - 1; len2 >= 0; len2--)
		{
			digit2 = h2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (g = 0; g < len - 1; g++)
	{
		if (result[g])
			i = 1;
		if (i)
			_putchar(result[g] + '0');
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
