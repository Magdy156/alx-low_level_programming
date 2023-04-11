#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	ptr = malloc((size1 + size2) * sizeof(char) + 1);
	if (ptr == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (size1 < 0)
		{
			ptr[i] = s1[i];
		}
		else
			ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}
