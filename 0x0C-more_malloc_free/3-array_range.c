#include <stdlib.h>
#include "main.h"

/**
 * *array_range - that creates an array of integers
 * @min: the minimum range values stored
 * @max: the maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *tar;
	int x, y;

	if (min > max)
		return (NULL);

	y = max - min + 1;

	tar = malloc(sizeof(int) * y);

	if (tar == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		tar[x] = min++;

	return (tar);
}
