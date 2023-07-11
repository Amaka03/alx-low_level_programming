#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create an array of size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int f;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (f = 0; f < size; f++)
		str[f] = c;
	return (str);
}
