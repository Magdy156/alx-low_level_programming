#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: the string
 * @needle: input
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
		haystack++;
	}

	return (0);
}
