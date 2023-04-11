#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: the sring to be allocated
 * Return: pointer
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
			ptr[i] = str[i];
	}
	return (ptr);
}
