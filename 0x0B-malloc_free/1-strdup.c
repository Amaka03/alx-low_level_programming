#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a duplicate to a new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int g, r = 0;

	if (str == NULL)
		return (NULL);
	g = 0;
	while (str[g] != '\0')
		g++;

	aaa = malloc(sizeof(char) * (g + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
