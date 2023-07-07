#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *f = haystack;
		char *g = needle;

		while (*f == *g && *g != '\0')
		{
			f++;
			g++;
		}

		if (*g == '\0')
			return (haystack);
	}

	return (0);
}
