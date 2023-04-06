#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string to get its length
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s)
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}

	return (sum);
}
