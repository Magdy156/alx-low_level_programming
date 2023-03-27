#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char temp;
	int length = 0;
	int i;

	while (s[length] != '\0')
	length++;
	for (i = 0; i < length; i++)
	{
		length--;
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
	}
}

