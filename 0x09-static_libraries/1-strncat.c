#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: the first string to be concatenated
 * @src: the second string to be concatenated
 * @n: no. of the second string 's bytes
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
