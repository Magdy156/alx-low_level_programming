#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: input
 * @max: input
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
