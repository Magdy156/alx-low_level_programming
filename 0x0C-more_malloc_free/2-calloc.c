#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with cnstant byte
 * @s: pointer
 * @b: constant
 * @n: max bytes to use
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
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
	_memset(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
