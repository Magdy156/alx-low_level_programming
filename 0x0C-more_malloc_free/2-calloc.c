#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: the array
 * @size: size of array
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
		return (NULL);
	memset(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
