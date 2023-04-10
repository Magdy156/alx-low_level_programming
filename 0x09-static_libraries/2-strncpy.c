#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the identifier
 * @src: string to be coppied
 * @n: no. of the second string 's bytes
 *
 * Return: the string after coppy process
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

