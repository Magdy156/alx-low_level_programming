#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char
 * @size: sieze of array
 * @c: a specific char for initailization
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0)
		return (0);

	while (size--)
		ptr[size] = c;
	return (ptr);
}
